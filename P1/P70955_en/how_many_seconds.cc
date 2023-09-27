/* Input: five natural numbers which represent: years, days, hours, minutes, seconds.
    Output: Total number of seconds represented by the input
    Observation: You may assume all years have 365 days. */

#include <iostream>

int main() {
  int y, d, h, m, s;
  std::cin >> y >> d >> h >> m >> s;
  d = d + y * 365;
  h = h + d * 24;
  m = m + h * 60;
  std::cout << s + m * 60 << std::endl;
}
