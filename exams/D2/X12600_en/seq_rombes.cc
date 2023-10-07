// Given pairs of positve natural numspaces, numrombes, generates sequences of rombes (as shown in examples)

#include <iostream>
using namespace std;

int main() {
  int n, m;
  while (cin >> n >> m) {
    int nblanks_out = n;
    int nblanks_in = 0;

    for (int h = 0; h < m; ++h) {
      for (int i = 0; i < 2*n + 1; ++i) {
        if (i == 2*n and h == m - 1) { nblanks_out = n; nblanks_in = 0; }
        else if (i == 2*n) { nblanks_out = 0; nblanks_in = 0; }

        for (int j = 0; j < nblanks_out; ++j) cout << ' ';
        if (i != 2*n or h == m - 1) cout << '*';
        for (int k = 0; k < nblanks_in; ++k) cout << ' ';
        if (i != 0 and i != 2*n) cout << '*';

        if (i == 0) { nblanks_out -= 1; nblanks_in = 1; }
        else if (i < n) { nblanks_out -= 1; nblanks_in += 2; }
        else if (i < 2*n) { nblanks_out += 1; nblanks_in -= 2; }
        if (i != 2*n) { cout << endl; }
      }
      nblanks_out = n; nblanks_in = 0;
    }
    cout << endl;
    cout << endl;
  }
}
