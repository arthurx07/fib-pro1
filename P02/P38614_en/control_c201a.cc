// A natural number is called cool if the sum of the digits which are in odd positions (starting to count on the right) is an even number.
// Write a program that prints if a given natural number n is cool or not.

#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int m = n;
  int sum = 0;
  for (int i = 1; m > 0; ++i) {
    if (i%2 != 0) sum += m%10; // check if current digit index is odd
    m /= 10;
  }
  if (sum%2 == 0) cout << n << " IS COOL" << endl;
  else cout << n << " IS NOT COOL" << endl;
}

// look-back to older version. wtf?
