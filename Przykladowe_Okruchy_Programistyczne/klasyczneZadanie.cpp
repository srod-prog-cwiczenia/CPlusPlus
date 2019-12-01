/*
to zadania już kultowe dosłownie, tym razem
wersja ,,szachowa'':
      skoczek, pionek
+     skoczek, wieża
      ==============
wieża, pionek, wieża
*/
#include <iostream>
using namespace std;
//------------------
//------------------
int main() {
	for (unsigned int podstawa = 2; podstawa <= 100; podstawa++) {
//zakładamy że skoczek i wieża nie są zero bo znajdują się na początku liczby
		for (unsigned int skoczek = 1; skoczek < podstawa; skoczek++)  
			for (unsigned int pionek = 0; pionek < podstawa; pionek++) 
				for (unsigned int wieza = 1; wieza < podstawa; wieza++)  {
					unsigned int skladnik1 = skoczek * podstawa + pionek;
					unsigned int skladnik2 = skoczek * podstawa + wieza;
					unsigned int suma = wieza * podstawa * podstawa + 
						pionek * podstawa + wieza;
					if (skladnik1 + skladnik2 == suma) {
						cout << "Podstawa: " << podstawa 
						<< " S: " << skoczek << " P: " << pionek << " W: " << wieza << endl;
					}
				}
	}
	return 0;
}

