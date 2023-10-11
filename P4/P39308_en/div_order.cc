// Input: several cases, each with a natural number n between 1 and 109.
// Output:  For every n, the divisors of n in increasing order.
// Hint: Every divisor smaller than the square root of n has a corresponding divisor greater than the
// square root of n. It could be useful to make two loops, one for “small” divisors, and another for “large” divisors.

#include <iostream>
using namespace std;

int main() {
  int n;
  while (cin >> n) {
    cout << "divisors of " << n << ":";

    // loop for "small" divisors, from 0 to √n
    for (int i = 1; i*i <= n; ++i) { // or i*i <= n
      if (n%i == 0) cout << ' ' << i;
    }

    int sqrt = 0;
    while (sqrt*sqrt < n) ++sqrt; // calc square root of n

    // loop for "large" divisors, from n to √n
    for (int j = sqrt - 1; j > 0; --j) {
      if (n%j == 0) cout << ' ' << n/j;
    }
    cout << endl;
  }
}
