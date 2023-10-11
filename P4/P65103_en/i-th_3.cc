// Input: integer number i, followed by the sequence x1, …, xn.
// Output: If the position i is correct, print the content of i. Otherwise, print “Incorrect position.”.

#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int m;
  bool found = false;
  for (int i = 0; i < n; ++i) {
    cin >> m;
    if (i + 1 == n) found = true;
  }
  if (found) cout << "At the position " << n << " there is a(n) " << m << '.' << endl;
  else cout << "Incorrect position." << endl;
}
