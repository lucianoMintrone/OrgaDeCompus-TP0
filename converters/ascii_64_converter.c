#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ascii_64_tables.h"
#include "ascii_64_converter.h"

static int numberToBeConvert(char charRead, int numberOfShiftsToTheRigth , int lastPartOfPreviousReadByte) {
	int firstPartOfCurrentReadingByte = charRead>>numberOfShiftsToTheRigth;
	int numberOfShiftsToTheLeft = 8 - numberOfShiftsToTheRigth;
	lastPartOfPreviousReadByte = lastPartOfPreviousReadByte<<numberOfShiftsToTheLeft;

	return firstPartOfCurrentReadingByte + lastPartOfPreviousReadByte;
}

static int numberToBeConvertForLastByte (int lastPartOfPreviousReadByte ,int numberOfShiftsToTheLeft) {
	return lastPartOfPreviousReadByte = lastPartOfPreviousReadByte<<numberOfShiftsToTheLeft;

}

void _encode_ascii_to_64(char *asciiCharArray, char *processedArray) {
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
			processedArray[0] = ascii_to_64(byteToConvert);
			lastPartOfPreviousReadByte = lastPartOfCurrentReadingByte;

			// Complete with two '='
			byteToConvert = numberToBeConvertForLastByte(lastPartOfPreviousReadByte, 4);

			processedArray[1] = ascii_to_64(byteToConvert);
			processedArray[2] = '=';
			processedArray[3] = '=';
		}
			break;
		case 2: {
			// First Char
			charRead = asciiCharArray[1];
			lastPartOfCurrentReadingByte = charRead&3;
			byteToConvert = numberToBeConvert(charRead, 2, lastPartOfPreviousReadByte);
			processedArray[0] = ascii_to_64(byteToConvert);
			lastPartOfPreviousReadByte = lastPartOfCurrentReadingByte;

			// Second Char
			charRead = asciiCharArray[2];
			lastPartOfCurrentReadingByte = charRead&15;
			byteToConvert = numberToBeConvert(charRead, 4, lastPartOfPreviousReadByte);
			processedArray[1] = ascii_to_64(byteToConvert);
			lastPartOfPreviousReadByte = lastPartOfCurrentReadingByte;

			// Complete with one '='
			byteToConvert = numberToBeConvertForLastByte(lastPartOfPreviousReadByte, 2);

			processedArray[2] = ascii_to_64(byteToConvert);
			processedArray[3] = '=';
		}
			break;
		case 3: {
			// First Char
			charRead = asciiCharArray[1];
			lastPartOfCurrentReadingByte = charRead&3;
			byteToConvert = numberToBeConvert(charRead, 2, lastPartOfPreviousReadByte);
			processedArray[0] = ascii_to_64(byteToConvert);
			lastPartOfPreviousReadByte = lastPartOfCurrentReadingByte;

			// Second Char
			charRead = asciiCharArray[2];
			lastPartOfCurrentReadingByte = charRead&15;
			byteToConvert = numberToBeConvert(charRead, 4, lastPartOfPreviousReadByte);
			processedArray[1] = ascii_to_64(byteToConvert);
			lastPartOfPreviousReadByte = lastPartOfCurrentReadingByte;

			// Third Char
			charRead = asciiCharArray[3];
			lastPartOfCurrentReadingByte = charRead&63;
			byteToConvert = numberToBeConvert(charRead, 6, lastPartOfPreviousReadByte);

			processedArray[2] = ascii_to_64(byteToConvert);

			byteToConvert = lastPartOfCurrentReadingByte;
			processedArray[3] = ascii_to_64(byteToConvert);
		}
			break;
	}
}

void _decode_64_to_ascii(char *base24CharArray, char *processedArray) {
	processedArray[0] = 0;
	char charRead;
	char otherCharRead;

	int numberFromSymbol;
	int secondNumberFromSymbol;

	// Read first Symbol
	charRead = base24CharArray[0];
	int firstNumberFromSymbol = _64_to_ascii(charRead);
	firstNumberFromSymbol = firstNumberFromSymbol<<2;

	// Read Second Symbol
	otherCharRead = base24CharArray[1];
	secondNumberFromSymbol = _64_to_ascii(otherCharRead);
	int firstPartOfSymbol = secondNumberFromSymbol;
	firstPartOfSymbol = firstPartOfSymbol>>4;
	processedArray[1] = firstNumberFromSymbol + firstPartOfSymbol;
	processedArray[0] = 1;

	if (base24CharArray[2] != '=') {
		// Read Third Symbol
		numberFromSymbol = secondNumberFromSymbol&15;
		numberFromSymbol = numberFromSymbol<<4;
		charRead = base24CharArray[2];
		secondNumberFromSymbol = _64_to_ascii(charRead);
		int firstPartOfSymbol = secondNumberFromSymbol;
		firstPartOfSymbol = firstPartOfSymbol>>2;
		processedArray[2] = numberFromSymbol + firstPartOfSymbol;
		processedArray[0] = 2;
	}

	if (base24CharArray[3] != '=') {
		// Read Fourth Symbol
		numberFromSymbol = secondNumberFromSymbol&3;
		numberFromSymbol = numberFromSymbol<<6;
		charRead = base24CharArray[3];
		secondNumberFromSymbol = _64_to_ascii(charRead);
		processedArray[3] = numberFromSymbol + secondNumberFromSymbol;
		processedArray[0] = 3;
	}
}

