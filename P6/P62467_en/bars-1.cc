// Input: natural number n > 0
// Output: print 2^n - 1 bars of asterisks, followig the pattern which has to be
// deduced from the examples

#include <iostream>
using namespace std;

void bars(int n) {
  if (n == 1) cout << '*' << endl;
  else { // if n = 2 //// if n = 3
    bars(n - 1); // * //// bars(2)
    for (int i = 0; i < n; ++i) cout << '*'; // ** //// ***
    cout << endl;
    bars(n - 1); // * //// bars(2)
  }
}

int main() {
  int n;
  cin >> n;
  bars(n);
}
