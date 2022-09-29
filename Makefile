CC := gcc
BUILD_DIR := build

.PHONY: all build clean

all: clean build

build:
	$(CC) main.c -o $(BUILD_DIR)/catsay

clean:
	rm -rf $(BUILD_DIR)
	mkdir $(BUILD_DIR)
