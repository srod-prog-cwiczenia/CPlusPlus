#include "stdafx.h"
#include "KlasaPoczatkowa.h"


KlasaPoczatkowa::KlasaPoczatkowa()
{
}
KlasaPoczatkowa::~KlasaPoczatkowa()
{
}
string KlasaPoczatkowa::zmianaTekstu(string txt) {
	return txt;
}
void KlasaPoczatkowa::run() {
	string txt;
	cout << "Podaj tekst...\n";
	cin >> txt;
	txt = zmianaTekstu(txt);
	cout << txt;
}