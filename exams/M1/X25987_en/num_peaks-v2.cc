// Input: Arbitrary number of cases. Each case has a positive natural number in one line, in base 10.
// Ouput: One line with the corresponding number of peaks
// Peak: the one in the middle is strictly greater than the other two surrounding it.
// Obs: Cannot use string. Fast solution 10 points, slow solution 5 points.

#include <iostream>
using namespace std;

int main() {
  int n, count = 0;
  while (cin >> n) { // treat-all algorithm
    while (n/100 != 0) {
      int m = (n/10)%10;
      if (n%10 < m and m > (n/100)%10) ++count; // n = amb; a < m and m > b
      n /= 10;
    }
    cout << count << endl;
    count = 0;
  }
}
