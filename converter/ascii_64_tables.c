#include "ascii_64_tables.h"

int _64_to_ascii (char symbol) {
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

char ascii_to_64 (int n) {
	switch(n) {
		case 0:
			return 'A';
		case 1:
			return 'B';
		case 2:
			return 'C';
		case 3:
			return 'D';
		case 4:
			return 'E';
		case 5:
			return 'F';
		case 6:
			return 'G';
		case 7:
			return 'H';
		case 8:
			return 'I';
		case 9:
			return 'J';
		case 10:
			return 'K';
		case 11:
			return 'L';
		case 12:
			return 'M';
		case 13:
			return 'N';
		case 14:
			return 'O';
		case 15:
			return 'P';
		case 16:
			return 'Q';
		case 17:
			return 'R';
		case 18:
			return 'S';
		case 19:
			return 'T';
		case 20:
			return 'U';
		case 21:
			return 'V';
		case 22:
			return 'W';
		case 23:
			return 'X';
		case 24:
			return 'Y';
		case 25:
			return 'Z';
		case 26:
			return 'a';
		case 27:
			return 'b';
		case 28:
			return 'c';
		case 29:
			return 'd';
		case 30:
			return 'e';
		case 31:
			return 'f';
		case 32:
			return 'g';
		case 33:
			return 'h';
		case 34:
			return 'i';
		case 35:
			return 'j';
		case 36:
			return 'k';
		case 37:
			return 'l';
		case 38:
			return 'm';
		case 39:
			return 'n';
		case 40:
			return 'o';
		case 41:
			return 'p';
		case 42:
			return 'q';
		case 43:
			return 'r';
		case 44:
			return 's';
		case 45:
			return 't';
		case 46:
			return 'u';
		case 47:
			return 'v';
		case 48:
			return 'w';
		case 49:
			return 'x';
		case 50:
			return 'y';
		case 51:
			return 'z';
		case 52:
			return '0';
		case 53:
			return '1';
		case 54:
			return '2';
		case 55:
			return '3';
		case 56:
			return '4';
		case 57:
			return '5';
		case 58:
			return '6';
		case 59:
			return '7';
		case 60:
			return '8';
		case 61:
			return '9';
		case 62:
			return '+';
		case 63:
			return '/';
		default:
			return 'A'; // Por que A es el default?
	}
}
