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
	processedArray[0] = 0;
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
	processedArray[1] = firstNumberFromSymbol + firstPartOfSymbol;
	processedArray[0] = 1;

	if (base24CharArray[3] != '=') {
		// Read Third Symbol
		numberFromSymbol = secondNumberFromSymbol&15;
		numberFromSymbol = numberFromSymbol<<4;
		charRead = base24CharArray[3];
		secondNumberFromSymbol = numberForSymbolInBase24(charRead);
		int firstPartOfSymbol = secondNumberFromSymbol;
		firstPartOfSymbol = firstPartOfSymbol>>2;
		processedArray[2] = numberFromSymbol + firstPartOfSymbol;
		processedArray[0] = 2;
	}

	if (base24CharArray[4] != '=') {
		// Read Fourth Symbol
		numberFromSymbol = secondNumberFromSymbol&3;
		numberFromSymbol = numberFromSymbol<<6;
		charRead = base24CharArray[4];
		secondNumberFromSymbol = numberForSymbolInBase24(charRead);
		processedArray[3] = numberFromSymbol + secondNumberFromSymbol;
		processedArray[0] = 3;
	}
}
