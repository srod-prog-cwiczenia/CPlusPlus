/*Czas - liczba czterocyfrowa (godziny plus minuty). Liczba ta jest iloczynem trzech różnych liczb pierwszych. Suma cyfr liczby tego czasu jest mniejsza od 7.*/
#include <iostream>
using namespace std;
//------------------
bool jestIloczynem3RoznychPierwszych(int p) {
  int dzielniki[3];
  for (int licznik = 0; licznik < 3; licznik++) {
    if (p == 1) return false;
    for (int dz = 2; dz <= p; dz++) {
      if (!(p % dz)) {
        dzielniki[licznik] = dz;
        p /= dz;
        break;
      }
    }
  }
  return p == 1 && dzielniki[0] != dzielniki[1] && 
    dzielniki[0] != dzielniki[2] && dzielniki[1] != dzielniki[2];
}
//------------------
int main() {
  for (int h = 0; h < 24; h++)
    for (int m2 = 0; m2 < 6; m2++)
      for (int m1 = 0; m1 < 10; m1++) {
        int liczba = h * 100 + m2 * 10 + m1;
// suma cyfr ma byc < 7:
        int sigma = m1 + m2 + h % 10 + h / 10;
        if (sigma >= 7) continue;
// jest iloczynem 3 roznych liczb pierwszych:
        if (!jestIloczynem3RoznychPierwszych(liczba)) continue;
        cout << h << ":" << m2 << m1 << endl;
      }
  return 0;
}
