// Input: seqüència no buida de naturals més grans o iguals que 100.
// Output: nombres de l’entrada que acabin amb les mateixes tres xifres que el primer nombre de la seqüència,
// així com quants d’aquests nombres hi ha. (format als exemples)

#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  cout << "nombres que acaben igual que " << n << ':' << endl;

  int sum = 0;
  int m = n%1000;
  while (cin >> n) { // treat-all algorithm
    if (n%1000 == m) {
      cout << n << endl;
      sum += 1;
    }
  }
  cout << "total: " << sum << endl;
}
