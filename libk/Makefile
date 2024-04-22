CC := gcc 
CFLAGS := -Wall -g

.PHONY: build clean

SRCS := $(wildcard src/*.c)
MAIN := main.c
OBJ := main.o
# //OBJS := $(SRCS:.c=.o)
TARGET := main

build: $(SRCS) $(MAIN)
	$(CC) $(CLFAGS) $(SRCS) $(MAIN) -o $(TARGET)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -rf $(TARGET) $(OBJ)