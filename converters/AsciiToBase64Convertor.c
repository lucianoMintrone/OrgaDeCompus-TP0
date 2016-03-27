/*
 * AsciiToBase64Convertor.c

 *
 *  Created on: Mar 24, 2016
 *      Author: luciano
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char * symbolInBase24ForInt(int number);
int numberToBeConvert(char charRead, int numberOfShiftsToTheRigth , int lastPartOfPreviousReadByte);
int numberToBeConvertForLastByte (int lastPartOfPreviousReadByte ,int numberOfShiftsToTheLeft);
void convertAsciiTextToBase24 (char *asciiCharArray, char *processedArray);

void convertAsciiTextToBase24 (char *asciiCharArray, char *processedArray) {
	int lastPartOfCurrentReadingByte;
	int lastPartOfPreviousReadByte = 0;
	int byteToConvert;

	char charRead;

	switch(asciiCharArray[0]) {
		case 0:
			break;
		case 1: {
			// First Char
			charRead = asciiCharArray[1];
			lastPartOfCurrentReadingByte = charRead&3;
			byteToConvert = numberToBeConvert(charRead, 2, lastPartOfPreviousReadByte);
			printf("Your symbol in base 64 is %s\n", symbolInBase24ForInt(byteToConvert));
			lastPartOfPreviousReadByte = lastPartOfCurrentReadingByte;

			// Complete with two '='
			byteToConvert = numberToBeConvertForLastByte(lastPartOfPreviousReadByte, 4);

			printf("Your symbol in base 64 is %s\n", symbolInBase24ForInt(byteToConvert));
			printf("Your symbol in base 64 is =\n");
			printf("Your symbol in base 64 is =\n");
		}
			break;
		case 2: {
			// First Char
			charRead = asciiCharArray[1];
			lastPartOfCurrentReadingByte = charRead&3;
			byteToConvert = numberToBeConvert(charRead, 2, lastPartOfPreviousReadByte);
			printf("Your symbol in base 64 is %s\n", symbolInBase24ForInt(byteToConvert));
			lastPartOfPreviousReadByte = lastPartOfCurrentReadingByte;

			// Second Char
			charRead = asciiCharArray[2];
			lastPartOfCurrentReadingByte = charRead&15;
			byteToConvert = numberToBeConvert(charRead, 4, lastPartOfPreviousReadByte);
			printf("Your symbol in base 64 is %s\n", symbolInBase24ForInt(byteToConvert));
			lastPartOfPreviousReadByte = lastPartOfCurrentReadingByte;

			// Complete with one '='
			byteToConvert = numberToBeConvertForLastByte(lastPartOfPreviousReadByte, 2);

			printf("Your symbol in base 64 is %s\n", symbolInBase24ForInt(byteToConvert));
			printf("Your symbol in base 64 is =\n");
		}
			break;
		case 3: {
			// First Char
			charRead = asciiCharArray[1];
			lastPartOfCurrentReadingByte = charRead&3;
			byteToConvert = numberToBeConvert(charRead, 2, lastPartOfPreviousReadByte);
			printf("Your symbol in base 64 is %s\n", symbolInBase24ForInt(byteToConvert));
			lastPartOfPreviousReadByte = lastPartOfCurrentReadingByte;

			// Second Char
			charRead = asciiCharArray[2];
			lastPartOfCurrentReadingByte = charRead&15;
			byteToConvert = numberToBeConvert(charRead, 4, lastPartOfPreviousReadByte);
			printf("Your symbol in base 64 is %s\n", symbolInBase24ForInt(byteToConvert));
			lastPartOfPreviousReadByte = lastPartOfCurrentReadingByte;

			// Third Char
			charRead = asciiCharArray[3];
			lastPartOfCurrentReadingByte = charRead&63;
			byteToConvert = numberToBeConvert(charRead, 6, lastPartOfPreviousReadByte);

			printf("Your symbol in base 64 is %s\n", symbolInBase24ForInt(byteToConvert));
			byteToConvert = lastPartOfCurrentReadingByte;
			printf("Your symbol in base 64 is %s\n", symbolInBase24ForInt(byteToConvert));

			lastPartOfCurrentReadingByte = 0;
			lastPartOfPreviousReadByte = lastPartOfCurrentReadingByte;
		}
			break;
	}
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

