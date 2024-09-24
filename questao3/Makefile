TARGET = questao3
CC = gcc
OBJECTS = questao3.o ../utils.o
SRC = questao3.c ../utils.c

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