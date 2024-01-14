// Write a program that reads two words and tells their lexicographic order.
#include <iostream>
using namespace std;

int main() {
  string a, b;  // string to get entire word, not only two first char of the 1st word
  cin >> a >> b;
  if (a < b) cout << a << " < " << b << endl; // a < b compares their order in alphabet
  else if (a > b) cout << a << " > " << b << endl; // being a < n < z
  else cout << a << " = " << b << endl;
}

// Double quotation marks for strings ""
// Single quotation marks for char ''
// note: we can use strings (at least in the first part of PRO1)
