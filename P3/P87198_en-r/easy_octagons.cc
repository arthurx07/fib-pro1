// Write a program that for every given natural number n prints an “octagon of size n” according to the pattern shown in the 
//  examples.

#include <iostream>
using namespace std;

int main() {
  int n;
  while (cin >> n) {
    int nblanks = n - 1;
    int ncross = n;
    for (int i = 0; i < 3*n - 2; ++i) { // n - 1 + n + n - 1
      for (int j = 0; j < nblanks; ++j) cout << ' ';
      for (int k = 0; k < ncross; ++k) cout << 'X';
      if (i < n - 1) { nblanks -= 1; ncross += 2; } // top
      else if (i >= 2*n - 2) { nblanks += 1; ncross -= 2; }// bot, n - 1 + n = 2*n - 1 (start sum in previous iteration)
      cout << endl;
    }
  cout << endl;
  }
}

// ccn 7 vs ccn 5
// to do: remove those two if, make ncross and nblanks depend on i [?]
