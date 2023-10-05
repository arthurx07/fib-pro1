// Write a program that reads two numbers x and y, and prints all 
// numbers between x and y (or between y and x), in decreasing order.

#include <iostream>
using namespace std;

int main() {
  int x, y;
  cin >> x >> y;

  if (x < y) { int z = x; x = y; y = z; }

  int i = x;
  while (i >= y) {
    cout << i << endl;
    --i;
  }
}
