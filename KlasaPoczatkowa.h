#pragma once

#include <iostream>
#include <string>
using namespace std;

class KlasaPoczatkowa
{
public:
	KlasaPoczatkowa();
	~KlasaPoczatkowa();
	virtual string zmianaTekstu(string txt);
	void run();
};

