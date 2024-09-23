TARGET = questao8
CC = gcc
OBJECTS = questao8.o ../utils.o
SRC = questao8.c ../utils.c

all: $(OBJECTS)
	$(CC) -o $(TARGET) $(OBJECTS)

clean:
	rm -f $(OBJECTS)
	mv $(TARGET) ../build