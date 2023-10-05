// Per a cada parell d’enters a i b donats, calculi i escriu la suma de tots els cubs entre a i b.
// Input: Seqüència de parells d’enters a i b.
// Output: Per a cada parell de l’entrada, cal escriure, en una línia i segons el format de l’exemple, 
//  el resultat de la suma a^3 + (a + 1)^3 + ⋯ + (b − 1)^3 + b^3.

#include <iostream>
using namespace std;

int main() {
  int a, b;
  while (cin >> a >> b) {
    int sum = 0;
    for (int i = a; i <= b; ++i) sum += i*i*i;
    cout << "suma dels cubs entre " << a << " i " << b << ": " << sum << endl;
  }
}
