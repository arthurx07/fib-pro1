// Write a procedure to read a rational number given in the form “numerator”/“denominator”, and store these two values in num and den, respectively. 
//  Additionally, you must remove all common factors from num and den.
#include <iostream>
using namespace std;

int gcd(int a, int b) {
  while (b != 0) { // while a%b is not 0
    int r = a%b; // r is the remainder of a/b
    a = b;
    b = r;
  }
  return a;
}

void read_rational(int& num, int& den) {
  char x;
  cin >> num >> x >> den;

  int d = gcd(num, den);

  num /= d;
  den /= d;
}
