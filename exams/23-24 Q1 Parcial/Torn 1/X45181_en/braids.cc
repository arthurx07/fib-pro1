// Input: An arbitrary number of cases, each consisting of three positive natural numbers in one line (lines, width, segment).
// Output: For each case, the corresponding braid, followed by a blank line.
// Obs: You can write the output character by character or by previously building strings, as you wish.

#include <iostream>
using namespace std;

int main() {
  int l, w, s;
  while (cin >> l >> w >> s) {
    int spaces = 0;
    for (int i = 0; i < l; ++i) {
      for (int j = 0; j < spaces; ++j) cout << ' ';
      for (int k = 0; k < w; ++k) cout << '*';
      cout << endl;

      if (i%(2*s) < s) ++spaces;
      else --spaces;
    }
    cout << endl;
  }
}

// < 15 minutes :)
// dif ratio: 0.7 / ccn ratio: 0.9
