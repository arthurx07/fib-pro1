// Input: An arbitrary number of cases, each of them consisting of three positive natural numbers n,m, side on one line.
// Output: grids with n*m squares with side 'side' as those shown in examples.

#include <iostream>
using namespace std;

int main() {
  int n, m, side;
  while (cin >> n >> m >> side) {
    for (int l = 0; l < (1 + side*n + n); ++l) {
      for (int k = 0; k < (1 + side*m + m); ++k) {
        if (k == 0 or k%(side + 1) == 0 or l == 0 or l%(side + 1) == 0) cout << '#';
        else cout << ' ';
      }
      cout << endl;
    }
    cout << endl;
  }
}

// finished solving problem (correct tests) at 16:50, exam ended at 16:49:42 :(
// (I started mock exam 5 min late)
