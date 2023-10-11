// Input: integer number i, followed by the sequence x1, …, xn.
// Output: If the position i is correct, print the content of i. Otherwise, print “Incorrect position.”.

#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int m;
  int count = 0;
  bool found = false;
  while (not found and cin >> m) {
    ++count;
    if (count == n) found = true;
  }
  if (found) cout << "At the position " << n << " there is a(n) " << m << '.' << endl;
  else cout << "Incorrect position." << endl;
}
