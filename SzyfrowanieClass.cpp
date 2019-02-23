#include "stdafx.h"
#include "SzyfrowanieClass.h"


SzyfrowanieClass::SzyfrowanieClass()
{
}


SzyfrowanieClass::~SzyfrowanieClass()
{
}

char SzyfrowanieClass::rot13(char znak) {
	// w g³ównej funkcji dopisaæ odwo³anie do funkcji 
	// która wczyta napis i zaszyfruje go w jakiœ sposób
	// np ROT13
	// napisaæ takie samo szyfrowanie tylko 
	// z wykorzystaniem char * zamiast string
	char dolnyZnak = '\0';
	if ('a' <= znak && znak <= 'z') {
		dolnyZnak = 'a';
	}
	if ('A' <= znak && znak <= 'Z') {
		dolnyZnak = 'A';
	}
	if (dolnyZnak == '\0') {
		return znak;
	}
	int kod = znak - dolnyZnak;
	kod = (kod + 13) % 26;
	return kod + dolnyZnak;
}

string SzyfrowanieClass::szyfrowanie2(string txt) {
	const char *str1 = txt.c_str();
	char str2[1000];

	for (unsigned int i = 0; i < strlen(str1); i++) {
		str2[i] = rot13(str1[i]);
	}
	str2[strlen(str1)] = '\0';
	return string(str2);
}
string SzyfrowanieClass::zmianaTekstu(string txt) {
	return szyfrowanie2(txt);
}

