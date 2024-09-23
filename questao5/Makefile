TARGET = questao5
CC = gcc
OBJECTS = questao5.o ../utils.o
SRC = questao5.c ../utils.c

all: $(OBJECTS)
	$(CC) -o $(TARGET) $(OBJECTS)

clean:
	rm -f $(OBJECTS)
	mv $(TARGET) ../build