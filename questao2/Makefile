TARGET = questao2
CC = gcc
OBJECTS = questao2.o ../utils.o
SRC = questao2.c ../utils.c

all: $(OBJECTS)
	$(CC) -o $(TARGET) $(OBJECTS)

clean:
	rm -f $(OBJECTS)
	mv $(TARGET) ../build