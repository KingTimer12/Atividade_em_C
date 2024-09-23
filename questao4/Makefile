TARGET = questao4
CC = gcc
OBJECTS = questao4.o ../utils.o
SRC = questao4.c ../utils.c

all: $(OBJECTS)
	$(CC) -o $(TARGET) $(OBJECTS)

clean:
	rm -f $(OBJECTS)
	mv $(TARGET) ../build