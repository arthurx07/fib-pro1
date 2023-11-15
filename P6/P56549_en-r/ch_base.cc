// Input: several natural numbers
// Output: print its binary, octal and hexadecimal notation

#include <iostream>
using namespace std;

void bin(const int& a) {
  if (a < 2) cout << a;
  else {
    bin(a/2);
    cout << a%2;
  }
}

void oct(const int& a) {
  if (a < 8) cout << a;
  else {
    oct(a/8);
    cout << a%8;
  }
}

void hex(const int& a) {
  if (a < 16) {
    if (a < 10) cout << a;
    else cout << char(a - 10 + 'A');
  }
  else {
    hex(a/16);
    if (a >= 10) cout << char(a%16 - 10 + 'A');
    else cout << a%16;
  }
}

int main() {
  int a;
  while (cin >> a) {
    cout << a << " = ";
    bin(a);
    cout << ", ";
    oct(a);
    cout << ", ";
    hex(a);
    cout << endl;
  }
}
