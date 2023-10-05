/* Write a program that reads a letter and prints it in lowercase if it was uppercase, 
 or prints it in uppercase if it was lowercase. */
#include <iostream>
using namespace std;

// int main() {
//   char n;
//   cin >> n;
//   if (int(n) < 97) cout << char(int(n) - int('A') + int('a')) << endl;
//   else cout << char(int(n) - int('a') + int('A')) << endl;
// }

// When assumming a program uses ascii code (and not unicode or others) we reduce it's program 
// compatibility. That's done if we assume: 'a' = 97
// For all codes first are the uppercase characters, and then the lowerase.
// A més, int(a) no és necessari quan està acompanyada d'operacions matemàtiques, ja que el mateix
// compilador ja l'interpreta com a int. El char() sí, ja que per a que la sortida sigui en 
// caràcter i no com a números.

int main() {
  char n;
  cin >> n;
  if (n < 'a') cout << char(n - 'A' + 'a') << endl; // <= to also review 'a'
  else cout << char(n - 'a' + 'A') << endl;
}
