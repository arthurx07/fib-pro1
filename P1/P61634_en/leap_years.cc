/* Input: natural number between 1800 and 9999.
    Output: If the year is a leap year, print “YES”; otherwise print “NO”.
    Obs: Leap years have 366 days. After the Gregorian reform, leap years are those 
    multiple of four which do not end with two zeros; and also the years ending with
    two zeros such that, after removing these two zeros, are divisble by four. 
    1800 and 1900, although being multiples of four were not leap years, 2000 was.*/

#include <iostream>
using namespace std;

int main() {
  int y;
  cin >> y;
  if ((y % 4 == 0 and y % 100 != 0) or (y / 100 % 4 == 0 and y % 100 == 0)) cout << "YES" << endl;
  // else if ( y / 100 % 4 == 0 and y % 100 == 0) cout << "YES" << endl;
  else cout << "NO" << endl;
}
