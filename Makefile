CC := gcc
PREFIX := /usr

.PHONY: all build install

all: build

build:
	$(CC) main.c -o catsay

install:
	cp catsay $(PREFIX)/bin/
