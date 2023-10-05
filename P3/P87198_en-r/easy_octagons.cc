// Write a program that for every given natural number n prints an “octagon of size n” according to the pattern shown in the 
//  examples.

#include <iostream>
using namespace std;

int main() {
  int n;
  while (cin >> n) {
    int nblanks = n - 1;
    int ncross = n;
    for (int i = 0; i < n - 1; ++i) {
      for (int j = 0; j < nblanks; ++j) cout << ' ';
      for (int k = 0; k < ncross; ++k) cout << 'X';
      nblanks -= 1;
      ncross += 2;
      cout << endl;
    }
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < ncross; ++j) cout << 'X';
      cout << endl;
    }
    for (int i = 0; i < n - 1; ++i) {
      nblanks += 1;
      ncross -= 2;
      for (int j = 0; j < nblanks; ++j) cout << ' ';
      for (int k =0; k < ncross; ++k) cout << 'X';
      cout << endl;
    }
  cout << endl;
  }
}
