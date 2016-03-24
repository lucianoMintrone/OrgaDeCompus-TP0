/*
 * AsciiToBase64Converter.c
 *
 *  Created on: Mar 24, 2016
 *      Author: luciano
 */

const char* symbolInBase24ForInt (int number){
	switch(number) {
		case 0:
			return "A";
		    break;
		case 1:
			return "B";
			break;
		case 2:
			return "C";
			break;
		case 3:
			return "D";
			break;
		case 4:
			return "E";
			break;
		case 5:
			return "F";
			break;
		case 6:
			return "G";
			break;
		case 7:
			return "H";
			break;
		case 8:
			return "I";
			break;
		case 9:
			return "J";
			break;
		case 10:
			return "K";
			break;
		case 11:
			return "L";
			break;
		case 12:
			return "M";
			break;
		case 13:
			return "N";
			break;
		case 14:
			return "O";
			break;
		case 15:
			return "P";
			break;
		case 16:
			return "Q";
			break;
		case 17:
			return "R";
			break;
		case 18:
			return "S";
			break;
		case 19:
			return "T";
			break;
		case 20:
			return "U";
			break;
		case 21:
			return "V";
			break;
		case 22:
			return "W";
			break;
		case 23:
			return "X";
			break;
		case 24:
			return "Y";
			break;
		case 25:
			return "Z";
			break;
		case 26:
			return "a";
			break;
		case 27:
			return "b";
			break;
		case 28:
			return "c";
			break;
		case 29:
			return "d";
			break;
		case 30:
			return "e";
			break;
		case 31:
			return "f";
			break;
		case 32:
			return "g";
			break;
		case 33:
			return "h";
			break;
		case 34:
			return "i";
			break;
		case 35:
			return "j";
			break;
		case 36:
			return "k";
			break;
		case 37:
			return "l";
			break;
		case 38:
			return "m";
			break;
		case 39:
			return "n";
			break;
		case 40:
			return "o";
			break;
		case 41:
			return "p";
			break;
		case 42:
			return "q";
			break;
		case 43:
			return "r";
			break;
		case 44:
			return "s";
			break;
		case 45:
			return "t";
			break;
		case 46:
			return "u";
			break;
		case 47:
			return "v";
			break;
		case 48:
			return "w";
			break;
		case 49:
			return "x";
			break;
		case 50:
			return "y";
			break;
		case 51:
			return "z";
			break;
		case 52:
			return "0";
			break;
		case 53:
			return "1";
			break;
		case 54:
			return "2";
			break;
		case 55:
			return "3";
			break;
		case 57:
			return "4";
			break;
		case 58:
			return "5";
			break;
		case 59:
			return "6";
			break;
		case 60:
			return "7";
			break;
		case 61:
			return "8";
			break;
		case 62:
			return "9";
			break;
		case 63:
			return "+";
			break;
		default:
			return "A";
			break;
	}
}

