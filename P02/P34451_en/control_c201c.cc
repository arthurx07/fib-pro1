// Reads an integer strictly positive x and a sequence of integers, and prints how many elements of the sequence are multiple of x.

#include <iostream>
using namespace std;

int main() {
  int x;
  cin >> x;

  int n;
  int sum = 0;
  while (cin >> n) {
    if ((n/x)*x == n) ++sum;
  }
  cout << sum << endl;
}
