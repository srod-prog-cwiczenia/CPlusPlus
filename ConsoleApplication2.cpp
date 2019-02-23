// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "KlasaPoczatkowa.h"
#include "SzyfrowanieClass.h"

using namespace std;


int main() {
	SzyfrowanieClass *sc = new SzyfrowanieClass();
	sc->run();
	delete sc;
	return 0;
}


