// Write a program that, given a natural number n, prints a “triangle of size n”.
// Output: Print n lines, in such a way that the i-th line contains i asterisks.

#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  for (int i = 1; i <= n; ++i) { // lines
    for (int j = 0; j < i; ++j) cout << '*'; // columns
    cout << endl;
  }
}
