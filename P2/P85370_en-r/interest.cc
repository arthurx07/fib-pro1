// Given an initial capital c in euros, an annual interest rate i (expressed in %), a time t in years and an indication whether the interest
//  is simple or compound, determine the amount of euros the initial capital is transformed into.
// Input: two strictly positive real numbers c and i, followed by a strictly positive integer t, followed by either the “simple” or “compound”.
// Output: Final capital with 4 decimal places.

#include <iostream>
using namespace std;

int main() {
  cout.setf(ios::fixed);
  cout.precision(4);

  double c, r; // capital, interest rate in %
  int t; // time in years
  string type;
  cin >> c >> r >> t >> type;

  double ci = 0;
  if (type == "simple") ci = 0.01*r*c*t;
  else if (type == "compound") {
    for (int i = 1; i <= t; ++i) ci += 0.01*r*(ci + c);
  }
  cout << c + ci << endl;
}

// simple interest rate is applying it to the initial capital; while compound interest rate is applying it to the capital
// of the previous year.
