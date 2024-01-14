// Input: number n, followed by n descriptions. If a rectangle, we have the word "rectange" followed by two strictly positive real numbers:
//  its length and its width. If a circle, we have the word "circle" followed by a strictly positive real number: its radius.
// Output: For each description, prints its area with 6 digits after the decimal point.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
  cout.setf(ios::fixed);
  cout.precision(6);

  int n;
  cin >> n;
  
  for (int i = 0; i < n; ++i) {
    string s;
    cin >> s;
    if (s == "rectangle") {
      double b, h;
      cin >> b >> h;
      cout << b*h << endl;
    }
    else { // if (s == "circle")
      double r;
      cin >> r;
      cout << r*r*M_PI << endl;
    }
  }
}
