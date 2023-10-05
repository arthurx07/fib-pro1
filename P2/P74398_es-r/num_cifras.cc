// Input: Una entrada con un único número k, del 1 al 10^8.
// Output: Escribe 15 líneas de la forma “Base x: y cifras.”, donde x son los números del 2 al 16, 
//  y y es el número de cifras necesarias en base x para representar el número k.

#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  for (int i = 2; i <= 16; ++i) {
    int x = 0; // x número de cifras
    int num = n;
    while (num > 0) {
      x += 1;
      num /= i;
    }

    cout << "Base " << i << ": " << x << " cifras." << endl;
  }
}

// ccn 3 vs ccn 2. remove while/for?
