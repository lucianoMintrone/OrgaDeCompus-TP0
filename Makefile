CC=gcc
CFLAGS=-Wall -pedantic -std=c99 -g -O0

tp0: handlers/file_handler.o converter/ascii_64_converter.o converter/ascii_64_tables.o 
	$(CC) $(CFLAGS) handlers/file_handler.o converter/ascii_64_converter.o converter/ascii_64_tables.o main.c -o tp0
