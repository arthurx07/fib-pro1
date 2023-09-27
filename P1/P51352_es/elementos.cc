/* agua (A) vence piedra (P) vence viento (V) vence agua. Di quien gana o si se produce 
    un empate.
    Entrada: Dos letras (A, P o V) separados por un espacio.
    Salida: 1 si vence el primero, 2 si vence el segundo, - (guión) si se produce un empate. */

#include <iostream>
using namespace std;

int main() {
  char a, b;
  cin >> a >> b;

  // A < P < V < A
  if (a == 'A' and b == 'V') cout << '2' << endl;
  else if (a < b) cout << '1' << endl;
  else if (a == 'V' and b == 'A') cout << '1' << endl;
  else if (a == b) cout << '-' << endl;
  else cout << '2' << endl;
}
