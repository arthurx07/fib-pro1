// Write a program that reads a natural number n and prints the n-th harmonic number, defined as Hn = 1/1 + 1/2 + ⋯ + 1/n.
// Output: Hn with 4 digits after the decimal point

#include <iostream>
using namespace std;

int main() {
  cout.setf(ios::fixed);
  cout.precision(4);

  int n;
  cin >> n;

  double sum = 0;
  for (int i = 1; i <= n; ++i) sum += 1.0/i; 
    // which is better?: int i + 1.0/i [or] double i + 1/i [or] double i + 1.0/i
  cout << sum << endl;
}
