// Given pairs of positve natural numspaces, numrombes, generates sequences of rombes (as shown in examples)

#include <iostream>
using namespace std;

int main() {
  int n, m;
  while (cin >> n >> m) {
    for (int h = 0; h < m; ++h) {
      int nblanks_out = n;
      int nblanks_in = 0;

      for (int i = 0; i < 2*n; ++i) {
        for (int j = 0; j < nblanks_out; ++j) cout << ' ';
        cout << '*';
        for (int k = 0; k < nblanks_in; ++k) cout << ' ';
        if (i != 0) cout << '*';

        if (i < n) { 
          nblanks_out -= 1;
          if (i == 0) nblanks_in = 1;
          else nblanks_in += 2;
        }
        else {
          nblanks_out += 1;
          nblanks_in -= 2;
        }
        cout << endl;
      }
    }
    for (int g = 0; g < n; ++g) cout << ' ';
    cout << '*'; // write latest star *

    cout << endl << endl;
  }
}
