#include <stdio.h>
#include <time.h>

int func1(int n)
{
    if (n == 0)
        return 1;
    return func1(n - 1) + func1(n - 1);
}

int func2(int n)
{
    if (n == 0)
        return 1;
    return 2 * func1(n - 1);
}

int func3(int n)
{
    if (n == 0)
        return 1;
    int valor = func3(n / 2);
    if (n % 2 == 0)
        return valor * valor;
    else
        return 2 * valor * valor;
}

int main()
{
    int i = 20;
    clock_t start, end;
    double cpu_time_used;

    start = clock();
    func1(i);
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Funcao func1(%d) executado em %fs\n", i, cpu_time_used);

    start = clock();
    func2(i);
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Funcao func2(%d) executado em %fs\n", i, cpu_time_used);

    start = clock();
    func3(i);
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Funcao func3(%d) executado em %fs\n", i, cpu_time_used);

    return 0;
}