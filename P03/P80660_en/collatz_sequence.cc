// natural number n > 0. If n is even, we divide it by two. Otherwise, we multiply it by 3 and add 1 to it. When we reach 1
//  we stop. Since 1937 it is conjectured that this process ends for any initial n, although nobody has been able to prove it.
// Input: several natural numbers n >= 1.
// Output: for every n, print how many steps are needed to reach 1. [suppose that this number is well defined]

#include <iostream>
using namespace std;

int main() {
  int n;
  while (cin >> n) {
    int steps = 0;
    while (n > 1) {
      if (n%2 == 0) {
        n /= 2;
        steps += 1;
      }
      else {
        n = 3*n + 1;
        steps += 1;
      }
    }
    cout << steps << endl;
  }
}

// Ratio: nloc 1.0, toks 0.8, dif 0.9, ccn 0.8 -> !
