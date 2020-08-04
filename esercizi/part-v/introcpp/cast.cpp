// cast.cpp

// Esempio di static cast

// Istruzioni per la compilazione e l'esecuzione:
//
// $ make cast
// $ ./cast

#include <iostream>
using namespace std;

int main()
{
  cout << "Please insert a floating point number\n";
  cout << "? ";

  double num_fp;
  cin >> num_fp;

  int num_int = static_cast<int>(num_fp);

  cout << "Your floating point number is: " << num_fp << endl;
  cout << "After casting to int: " << num_int << endl;

  return 0;
}
