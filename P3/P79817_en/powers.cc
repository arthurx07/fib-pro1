// Input: several pairs of integer numbers a and b. Assume b ≥ 0.
// For every pair a,b, print a^b. Supose, as usual, that 0^0 = 1.

#include <iostream>
using namespace std;

int main() {
  int a, b;
  while (cin >> a >> b) {
    int p = 1;
    for (int i = 0; i < b; ++i) p *= a;
    cout << p << endl;
  }
}
