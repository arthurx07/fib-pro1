// Write a program that reads several natural numbers and prints the sum of the digits of each one.

#include <iostream>
using namespace std;

int main() {
  int n;
  while (cin >> n) {
    int sum = 0;
    // int m = n;
    // while (m > 0) {
    //   sum += m%10;
    //   m = m/10;
    // }
    for (int m = n; m > 0; m /= 10) sum += m%10;
    cout << "The sum of the digits of " << n << " is " << sum << "." << endl;
  }
}
