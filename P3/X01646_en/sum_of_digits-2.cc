// Write a program that reads a basis for numeration and several numbers and prints the sum in base 10 of the digits in base b of each one.
// Input: value of b>=2 followed by a sequence of natural numbers.
// Output: For every number, print the sum (in base 10) of its digits in base b.

#include <iostream>
using namespace std;

int main() {
  int b;
  cin >> b;

  int n;
  while (cin >> n) {
    int sum = 0;
    for (int i = n; i > 0; i /= b) sum += i%b;
    cout << n << ": " << sum << endl;
  }
}
