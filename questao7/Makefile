TARGET = questao7
CC = gcc
OBJECTS = questao7.o ../utils.o
SRC = questao7.c ../utils.c

all: $(OBJECTS)
	$(CC) -o $(TARGET) $(OBJECTS)

clean:
	rm -f $(OBJECTS)
	mv $(TARGET) ../build