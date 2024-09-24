TARGET = questao6
CC = gcc
OBJECTS = questao6.o ../utils.o
SRC = questao6.c ../utils.c

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