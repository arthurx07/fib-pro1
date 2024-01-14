// Input: sequence of real numbers that represent angles in degrees.
// Output: For each given angle, print a line with its sine and its cosine, with six digits after the decimal point.
// Output: Use the procedures that your programming language already provides to compute sines and cosines.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double a;
  double conv_rad = M_PI/180; // convert degrees to radians
  cout.setf(ios::fixed);
  cout.precision(6);
  while (cin >> a) cout << sin(a*conv_rad) << ' ' << cos(a*conv_rad) << endl;
}
