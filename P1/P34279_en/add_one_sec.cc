/* Input: three natural numbers h, m, s which represent a clock time. h < 24; m < 60; s < 60
    Output: Print the new clock time defined by h, m and s plus one second in the format 
    “HH:MM:SS”. */

#include <iostream>
using namespace std;

int main() {
  int h, m, s;
  cin >> h >> m >> s;

  s = s + 1;
  if (s == 60) { s = 0; m = m + 1; }
  if (m == 60) { m = 0; h = h + 1; }
  if (h == 24) { s = 0; m = 0; h = 0; }

  if (h >= 10) cout << h << ":"; // == (h / 10 != 0)
  else cout << '0' << h << ":";
  if (m >= 10) cout << m << ":";
  else cout << '0'<< m << ":";
  if (s >= 10) cout << s << endl;
  else cout << '0' << s << endl;
}
