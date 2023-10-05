// Write a program that computes the number of digits in several bases.
// Input: sequence of pairs of natural numbers b and n, such that b≥ 2 and n≥ 1.
// Ouput: for every pair, print the number of digits of n in base b.

#include <iostream>
using namespace std;

int main() {
  int b, n;
  while (cin >> b >> n) {
    int dig = 0;
    while (n != 0) {
      n = n / b;
      ++dig;
    }
    cout << dig << endl;
  }
}
