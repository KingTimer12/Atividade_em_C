TARGET = questao6
CC = gcc
OBJECTS = questao6.o ../utils.o
SRC = questao6.c ../utils.c

all: $(OBJECTS)
	$(CC) -o $(TARGET) $(OBJECTS)

clean:
	rm -f $(OBJECTS)
	mv $(TARGET) ../build