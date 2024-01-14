// Input: sequence of natural numbers
// Output: For every given number, print in a line its square, and its square root with six digits after the decimal point.
// Observation: Use the procedure that your programming language already provides to compute square roots.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int a;
  cout.setf(ios::fixed);
  cout.precision(6);
  while (cin >> a) cout << a*a << ' ' << sqrt(a) << endl;
}
