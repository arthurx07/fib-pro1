// Write a program that reads a number and prints its number of digits.

#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int digits = 1;
  int num = n;
  while (num/10 > 0) {
    num /= 10;
    ++digits;
  }

  cout << "The number of digits of " << n << " is " << digits << "." << endl;
}
