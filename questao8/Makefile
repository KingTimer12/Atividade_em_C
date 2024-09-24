TARGET = questao8
CC = gcc
OBJECTS = questao8.o aluno.o ../utils.o
SRC = questao8.c aluno.c ../utils.c

all: $(OBJECTS)
	$(CC) -o $(TARGET) $(OBJECTS)

clean:
ifeq ($(OS),Windows_NT)
	del /F /Q $(subst /,\,$(OBJECTS))
	move $(subst /,\,$(TARGET).exe) ..\build
else
	rm -f $(OBJECTS)
	mv $(TARGET) ../build
endif