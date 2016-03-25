/*
 * Base24ToAsciiTable.c
 *
 *  Created on: Mar 24, 2016
 *      Author: luciano
 */

int numberForSymbolInBase24 (char symbol) {
	if (symbol == '=')
		return 0;
	if (symbol == 'A')
		return 0;
	if (symbol == 'B')
		return 1;
	if (symbol == 'C')
		return 2;
	if (symbol == 'D')
		return 3;
	if (symbol == 'E')
		return 4;
	if (symbol == 'F')
		return 5;
	if (symbol == 'G')
		return 6;
	if (symbol == 'H')
		return 7;
	if (symbol == 'I')
		return 8;
	if (symbol == 'J')
		return 9;
	if (symbol == 'K')
		return 10;
	if (symbol == 'L')
		return 11;
	if (symbol == 'M')
		return 12;
	if (symbol == 'N')
		return 13;
	if (symbol == 'O')
		return 14;
	if (symbol == 'P')
		return 15;
	if (symbol == 'Q')
		return 16;
	if (symbol == 'R')
		return 17;
	if (symbol == 'S')
		return 18;
	if (symbol == 'T')
		return 19;
	if (symbol == 'U')
		return 20;
	if (symbol == 'V')
		return 21;
	if (symbol == 'W')
		return 22;
	if (symbol == 'X')
		return 23;
	if (symbol == 'Y')
		return 24;
	if (symbol == 'Z')
		return 25;
	if (symbol == 'a')
		return 26;
	if (symbol == 'b')
		return 27;
	if (symbol == 'c')
		return 28;
	if (symbol == 'd')
		return 29;
	if (symbol == 'e')
		return 30;
	if (symbol == 'f')
		return 31;
	if (symbol == 'g')
		return 32;
	if (symbol == 'h')
		return 33;
	if (symbol == 'i')
		return 34;
	if (symbol == 'j')
		return 35;
	if (symbol == 'k')
		return 36;
	if (symbol == 'l')
		return 37;
	if (symbol == 'm')
		return 38;
	if (symbol == 'n')
		return 39;
	if (symbol == 'o')
		return 40;
	if (symbol == 'p')
		return 41;
	if (symbol == 'q')
		return 42;
	if (symbol == 'r')
		return 43;
	if (symbol == 's')
		return 44;
	if (symbol == 't')
		return 45;
	if (symbol == 'u')
		return 46;
	if (symbol == 'v')
		return 47;
	if (symbol == 'w')
		return 48;
	if (symbol == 'x')
		return 49;
	if (symbol == 'y')
		return 50;
	if (symbol == 'z')
		return 51;
	if (symbol == '0')
		return 52;
	if (symbol == '1')
		return 53;
	if (symbol == '2')
		return 54;
	if (symbol == '3')
		return 55;
	if (symbol == '4')
		return 56;
	if (symbol == '5')
		return 57;
	if (symbol == '6')
		return 58;
	if (symbol == '7')
		return 59;
	if (symbol == '8')
		return 60;
	if (symbol == '9')
		return 61;
	if (symbol == '+')
		return 62;
	if (symbol == '/')
		return 63;
	return 0;
}
