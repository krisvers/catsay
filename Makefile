CC := gcc-10
OS := linux
ARCH := x86_64
BUILD_DIR := build

.PHONY: all build clean install run

all: build-$(ARCH)-$(OS)

build-aarch64-linux:
	aarch64-linux-gnu-$(CC) main.c -o $(BUILD_DIR)/$(ARCH)-$(OS)-catsay

build-x86_64-linux:
	x86_64-linux-gnu-$(CC) main.c -o $(BUILD_DIR)/$(ARCH)-$(OS)-catsay

build-x86_64-win:
	x86_64-w64-mingw32-$(CC) main.c -o $(BUILD_DIR)/$(ARCH)-$(OS)-catsay

clean:
	rm -rf $(BUILD_DIR)
	mkdir $(BUILD_DIR)
