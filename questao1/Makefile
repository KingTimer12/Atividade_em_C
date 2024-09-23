TARGET = questao3
CC = gcc
OBJECTS = questao3.o ../utils.o
SRC = questao3.c ../utils.c

all: $(OBJECTS)
	$(CC) -o $(TARGET) $(OBJECTS)

clean:
	rm -f $(OBJECTS)
	mv $(TARGET) ../build