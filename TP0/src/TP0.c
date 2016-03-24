/*
 ============================================================================
 Name        : TP0.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "AsciiToBase64Converter.h"

const char * symbolInBase24ForInt(int number);

int main(void) {
	int firstSixBitsOfByte;
	int lastTwoBitsOfByte;

	char charRead;

	printf("Enter a char: ");
	scanf("%s",&charRead);

	lastTwoBitsOfByte = charRead&3;
	firstSixBitsOfByte = charRead>>2;

	printf("Your symbol in base 64 is %s\n", symbolInBase24ForInt(firstSixBitsOfByte));

	return EXIT_SUCCESS;
}

