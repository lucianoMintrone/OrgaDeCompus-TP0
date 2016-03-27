/*
 * Base24ToAsciiConvertor.c
 *
 *  Created on: Mar 24, 2016
 *      Author: luciano
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Base24ToAsciiTable.h"

void convertBase24TextToAscii (char *base24CharArray, char *processedArray);

void convertBase24TextToAscii (char *base24CharArray, char *processedArray) {
	char charRead;
	char otherCharRead;

	int numberFromSymbol;
	int secondNumberFromSymbol;

	// Read first Symbol
	charRead = base24CharArray[1];
	int firstNumberFromSymbol = numberForSymbolInBase24(charRead);
	firstNumberFromSymbol = firstNumberFromSymbol<<2;
	
	// Read Second Symbol
	otherCharRead = base24CharArray[2];
	secondNumberFromSymbol = numberForSymbolInBase24(otherCharRead);
	int firstPartOfSymbol = secondNumberFromSymbol;
	firstPartOfSymbol = firstPartOfSymbol>>4;
	printf("Char en Ascii: %c\n", firstNumberFromSymbol + firstPartOfSymbol);
	numberFromSymbol = secondNumberFromSymbol&15;
	numberFromSymbol = numberFromSymbol<<4;

	if (base24CharArray[3] != '=') {
		// Read Third Symbol
		charRead = base24CharArray[3];
		secondNumberFromSymbol = numberForSymbolInBase24(charRead);
		int firstPartOfSymbol = secondNumberFromSymbol;
		firstPartOfSymbol = firstPartOfSymbol>>2;
		printf("Char en Ascii: %c\n", numberFromSymbol + firstPartOfSymbol);
		numberFromSymbol = secondNumberFromSymbol&3;
		numberFromSymbol = numberFromSymbol<<6;
	}

	if (base24CharArray[4] != '=') {
		// Read Fourth Symbol
		charRead = base24CharArray[4];
		secondNumberFromSymbol = numberForSymbolInBase24(charRead);
		printf("Char en Ascii: %c\n", numberFromSymbol + secondNumberFromSymbol);
		numberFromSymbol = 0;
	}
}
