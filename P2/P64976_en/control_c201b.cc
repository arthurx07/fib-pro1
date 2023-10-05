// The n first lines of multiplication table of a natural number n
// Input: natural number n
// Output: n first lines of the multiplication table of n, following the format of the instances.

#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int i = 1;
  while (i <= n) {
    cout << n << " x " << i << " = " << n*i << endl;
    ++i; // use ++i instead of i++, more efficient as of pro1
  }
}
