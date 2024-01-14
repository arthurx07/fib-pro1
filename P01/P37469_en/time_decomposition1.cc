/* Input: natural number n
    Output: three natural numbers h, m, s such that 3600h+60m+s=n, with m<60 and s<60. */

#include <iostream>
using namespace std;

int main() {
  int h, m, s, n;
  cin >> n;
  if (n >= 60) { m = n / 60; s = n % 60; }
  else { m = 0; s = n; }
  if (m >= 60) { h = m / 60; m = m % 60; }
  else h = 0;
  cout << h << " " << m << " " << s << endl;
}
