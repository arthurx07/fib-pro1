#include <iostream>
using namespace std;


void read_rational(int& num, int& den) {
  char x;
  cin >> num >> x >> den;

  int min = 0;
  if (num <= den) min = num;
  else min = den;

  for (int i = 1; i*i <= min; ++i) { // divisors repeated after sqrt(min)
    if (num%i == 0 and den%i == 0) {
      num /= i;
      den /= i;
    }
  }

  int sqrt = 0;
  while (sqrt*sqrt < min) ++sqrt;
  for (int j = sqrt -1; j > 0; --j) {
    if (num%j == 0 and den%j == 0) {
      num /= j;
      den /= j;
    }
  }
}


int main() {
  int t;
  cin >> t;
  while (t--) {
    int num, den;
    read_rational(num, den);
    cout << num << ' ' << den << endl;
  }
  return 0;
}
