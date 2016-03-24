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
int numberToBeConvert(char charRead, int numberOfShiftsToTheRigth , int lastPartOfPreviousReadByte);
int numberToBeConvertForLastByte (int lastPartOfPreviousReadByte ,int numberOfShiftsToTheLeft);

int main(void) {
	int firstPartOfCurrentReadingByte;
	int lastPartOfCurrentReadingByte;
	int lastPartOfPreviousReadByte = 0;
	int byteToConvert;

	char charRead;
	int charReadCounter = 0;

	int i;
	for (i = 0 ; i < 5 ; i ++) {
		printf("Enter a char: ");
		scanf("%s",&charRead);

		switch(charReadCounter % 3) {
			case 0:{
				lastPartOfCurrentReadingByte = charRead&3;
				byteToConvert = numberToBeConvert(charRead, 2, lastPartOfPreviousReadByte);

				printf("Your symbol in base 64 is %s\n", symbolInBase24ForInt(byteToConvert));
				}
				break;
			case 1:{
				lastPartOfCurrentReadingByte = charRead&15;
				byteToConvert = numberToBeConvert(charRead, 4, lastPartOfPreviousReadByte);

				printf("Your symbol in base 64 is %s\n", symbolInBase24ForInt(byteToConvert));
				}
				break;
			case 2:{
				lastPartOfCurrentReadingByte = charRead&63;
				byteToConvert = numberToBeConvert(charRead, 6, lastPartOfPreviousReadByte);

				printf("Your symbol in base 64 is %s\n", symbolInBase24ForInt(byteToConvert));
				byteToConvert = lastPartOfCurrentReadingByte;
				printf("Your symbol in base 64 is %s\n", symbolInBase24ForInt(byteToConvert));
				lastPartOfCurrentReadingByte = 0;
				}
				break;
		}

		lastPartOfPreviousReadByte = lastPartOfCurrentReadingByte;

		charReadCounter ++;
	}

	if (charReadCounter % 3 == 1) {

		//lastPartOfCurrentReadingByte = 0;
		//firstPartOfCurrentReadingByte = 0;
		//lastPartOfPreviousReadByte = lastPartOfPreviousReadByte<<4;
		byteToConvert = numberToBeConvertForLastByte(lastPartOfPreviousReadByte, 4);
		printf("Your symbol in base 64 is %s\n", symbolInBase24ForInt(byteToConvert));
		printf("Your symbol in base 64 is =\n");
		printf("Your symbol in base 64 is =\n");
	}

	if (charReadCounter % 3 == 2) {
		//lastPartOfCurrentReadingByte = 0;
		//firstPartOfCurrentReadingByte = 0;
		//lastPartOfPreviousReadByte = lastPartOfPreviousReadByte<<2;
		byteToConvert = numberToBeConvertForLastByte(lastPartOfPreviousReadByte, 2);

		printf("Your symbol in base 64 is %s\n", symbolInBase24ForInt(byteToConvert));
		byteToConvert = lastPartOfCurrentReadingByte;
		printf("Your symbol in base 64 is =\n");
	}

	return EXIT_SUCCESS;
}

int numberToBeConvert(char charRead, int numberOfShiftsToTheRigth , int lastPartOfPreviousReadByte) {
	int firstPartOfCurrentReadingByte = charRead>>numberOfShiftsToTheRigth;
	int numberOfShiftsToTheLeft = 8 - numberOfShiftsToTheRigth;
	lastPartOfPreviousReadByte = lastPartOfPreviousReadByte<<numberOfShiftsToTheLeft;

	return firstPartOfCurrentReadingByte + lastPartOfPreviousReadByte;
}

int numberToBeConvertForLastByte (int lastPartOfPreviousReadByte ,int numberOfShiftsToTheLeft) {
	return lastPartOfPreviousReadByte = lastPartOfPreviousReadByte<<numberOfShiftsToTheLeft;
}

