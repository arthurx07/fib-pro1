// A natural number is called cool if the sum of the digits which are in odd positions (starting to count on the right) is an even number.
// Write a program that prints if a given natural number n is cool or not.

#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int s1 = n%10;
  int s2 = 0;
  int m = n/10;
  int i = 0;
  while (m > 0) {
    s2 += m%10;
    m /= 10;
    ++i;
    s1 += m%10;
    m /= 10;
    ++i;
  }
  int sum;
  if (i%2 == 0) sum = s1;
  else sum = s2;

  if (sum%2 == 0) cout << n << " IS COOL" << endl;
  else cout << n << " IS NOT COOL" << endl;
}
