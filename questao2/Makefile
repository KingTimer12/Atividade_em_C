TARGET = questao2
CC = gcc
OBJECTS = questao2.o ../utils.o
SRC = questao2.c ../utils.c

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