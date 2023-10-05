// Write a program that reads a non-empty sequence of strictly positive numbers and prints their average, with 2 digits after the decimal point.

#include <iostream>
using namespace std;

int main() {
  cout.setf(ios::fixed);
  cout.precision(2);

  double n;
  double sum = 0;
  int count = 0;
  while (cin >> n) {
    sum += n;
    ++count;
  }
  cout << sum/count << endl;
}

// nloc 1.0; toks 1.0; dif 1.0; ccn 1.0 -> clavao!
