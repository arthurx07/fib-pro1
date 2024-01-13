// Input: several natural numbers
// Output: print its binary, octal and hexadecimal notation

#include <iostream>
using namespace std;

void base_change(const int& a, const int b) {
  if (a < b) {
    if (a < 10) cout << a;
    else cout << char(a - 10 + 'A'); // for base >10
  }
  else {
    base_change(a/b, b);
    if (a%b < 10) cout << a%b;
    else cout << char(a%b - 10 + 'A');
  }
}

int main() {
  int a;
  while (cin >> a) {
    cout << a << " = ";
    base_change(a, 2);
    cout << ", ";
    base_change(a, 8);
    cout << ", ";
    base_change(a, 16);
    cout << endl;
  }
}
