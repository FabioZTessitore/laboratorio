// potenzacoda.cpp

// Calcola la potenza tramite funzione ricorsiva.
// Utilizza ricorsione in coda.

// istruzioni per la compilazione e l'esecuzione:
//
// $ make potenzacoda
// $ ./potenzacoda

#include <iostream>
using namespace std;

double power(double base, int exponent, double parziale = 1.);

int main()
{
  double b = 3.;
  int e = 4;

  cout << b << "^" << e << " = " << power(b, e) << endl;

  return 0;
}

/* power:
 *
 * suppone che exponent sia un intero maggiore
 * o uguale a 1
 */
double power(double base, int exponent, double parziale)
{
  if (exponent == 1) return base * parziale;

  return power(base, exponent-1, base*parziale);
}
