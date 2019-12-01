/*
liczba 10 cyfrowa złożona z 10 różnych cyfr,
liczba utworzona przez 2 pierwsze dzieli się przez 2
liczba utworzona przez 3 pierwsze dzieli się przez 3,
etc.
*/
#include <iostream>
using namespace std;

void uwzglednij(int t[], int max) {
  if (!t[0]) return; //nie może być zera na początku liczby
  bool jest = true;
  for (int i = 2; i <= max; i++) {
    long int utworzona = 0;
    long int mnoznik = 1;
    for (int j = i - 1; j >= 0; j--) {
      utworzona += mnoznik * t[j];
      mnoznik *= 10;
    }
    jest &= !(utworzona % i);
  }
  if (jest) {
    for (int i = 0; i < max; i++)
    	cout << t[i] << " ";
    cout << endl;
  }
}
  
void permutacja(int t[], int rozmiar, int max) { 
    if (rozmiar == 1) { 
        uwzglednij(t, max); 
        return; 
    } 
    for (int i = 0; i < rozmiar; i++) { 
        permutacja(t, rozmiar - 1, max); 
        if (rozmiar % 2) 
          swap (t[0], t[rozmiar - 1]); 
        else
          swap(t[i], t[rozmiar - 1]); 
    } 
} 

int main() { 
    for (int q = 2; q <= 10; q++) {
	    int tab[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; 
	    permutacja(tab, q, q); 
    }
    return 0; 
} 
