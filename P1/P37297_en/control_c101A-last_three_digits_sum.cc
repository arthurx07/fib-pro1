/* Write a program that reads a natural number and prints the sum of their three last digits.
    Input: natural number n>=100.
    Output: a line with sum of the last three digits of n. */

#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int m2 = n % 1000; // get last three digits of x
  int m1 = n % 100; // get last two digits of x
  int m0 = n % 10; // get last digit of x
  int sum = m0 + (m1 - m0)/10 + (m2 - m1)/100;
  cout << sum << endl;
}
