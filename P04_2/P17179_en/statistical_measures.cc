// Input: natural number n, followed by n sequences. Each sequence begins with the number of
//  elements m > 0, followed by m real numbers.
// Output: For every sequence, print in a line and with four digits after the decimal point
//  its minimum, its maximum and its average.

#include <iostream>
using namespace std;

int main() {
  cout.setf(ios::fixed);
  cout.precision(4);

  int n;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    int m, j = 0;
    cin >> m;
    double min = 0, max = 0, avg = 0;
    while (j < m) {
      double x;
      cin >> x;
      if (x < min or j == 0) min = x;
      if (x > max or j == 0) max = x;
      avg += x;
      ++j;
    }
    cout << min << ' ' << max << ' ' << avg/j << endl;
  }
}
