/* Input: five natural numbers which represent: years, days, hours, minutes, seconds.
    Output: Total number of seconds represented by the input
    Observation: You may assume all years have 365 days. */

#include <iostream>
using namespace std;

int main() {
  int y, d, h, m, s;
  cin >> y >> d >> h >> m >> s;
  d = d + y * 365;
  h = h + d * 24;
  m = m + h * 60;
  cout << s + m * 60 << endl;
}
