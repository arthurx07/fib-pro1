// Input: natural number n, followed by n words.
// Output: print the words in reverse order, one per line, and with the characters inside each word reversed.

#include <iostream>
#include <vector>
using namespace std;

void out_reverse(const string& w) {
  int s = w.size();
  for (int i = s - 1; i >= 0; --i) cout << w[i];
}

int main() {
  int n;
  cin >> n;

  vector<string> v(n);
  for (int i = 0; i < n; ++i) cin >> v[i];

  for (int j = n - 1; j >= 0; --j) {
    out_reverse(v[j]);
    cout << endl;
  }
}
