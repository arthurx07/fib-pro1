// Input: several pairs of natural numbers.
// Output: For every pair (n,m), print a rectangle of size n × m filled with 9,8,…0, 9, ….
// Separate two rectangles with an empty line.

#include <iostream>
using namespace std;

int main() {
  int n, m;
  bool first = true;
  while (cin >> n >> m) {
    int num = 0;
    if (not first) cout << endl;
    else first = false;
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) {
        if (num == 0) num = 9;
        else num -= 1;
        cout << num;
      }
    cout << endl;
    }
    // cout << endl;
  }
}
