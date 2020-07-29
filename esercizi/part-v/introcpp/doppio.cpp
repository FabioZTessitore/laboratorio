// doppio.cpp

// stampa il doppio del numero inserito

// Istruzioni per la compilazione e l'esecuzione:
//
// Compilazione:
// $ make doppio
//
// Esecuzione:
// $ ./doppio

#include <iostream>
using namespace std;

int main()
{
    cout << "Calcola il dopppio di un numero\n\n";

    int num;
    cout << "Numero: ";
    cin >> num;

    int doppio {num*2};

    cout << "Il doppio di " << num << " e' " << doppio << endl;

    return 0;
}