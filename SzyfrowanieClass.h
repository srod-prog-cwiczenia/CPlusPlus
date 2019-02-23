#pragma once
#include <iostream>
#include <string>
#include "KlasaPoczatkowa.h"
#include "SzyfrowanieClass.h"
using namespace std;
class SzyfrowanieClass : public KlasaPoczatkowa
{
public:
	SzyfrowanieClass();
	~SzyfrowanieClass();
	char rot13(char znak);
	string szyfrowanie2(string txt);
	string zmianaTekstu(string txt);
};

