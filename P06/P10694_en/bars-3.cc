// Input: natural number n > 0
// Output: print 2^n - 1 lines of asterisks, following the pattern which can be 
// deduced from the examples

#include <iostream>
using namespace std;

void bars(int n) {
  if (n == 1) cout << '*' << endl; // basic case
  else {
    bars(n - 1); // n calls n - 1 two times before writing n asterisks
    bars(n - 1);
    for (int j = 0; j < n; ++j) cout << '*';
    cout << endl;
  }
}

int main() {
  int n;
  cin >> n;
  bars(n);
}
