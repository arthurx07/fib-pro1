// Write a program that reads two numbers a and b, and prints all numbers between a and b.
// Input: natural numbers a and b
// Output: Print a line with a,a+1,…,b−1,b.

#include <iostream>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  if (a <= b) {
    int i = a;
    cout << i;
    while (i < b) {
      ++i;
      cout << ',' << i;
    }
  }
  cout << endl;
}
