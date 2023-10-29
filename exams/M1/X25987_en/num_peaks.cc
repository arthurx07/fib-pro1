// Input: Arbitrary number of cases. Each case has a positive natural number in one line, in base 10.
// Ouput: One line with the corresponding number of peaks
// Peak: the one in the middle is strictly greater than the other two surrounding it.
// Obs: Cannot use string. Fast solution 10 points, slow solution 5 points.

#include <iostream>
using namespace std;

int main() {
  int n;
  while (cin >> n) { // treat-all algorithm
    int count = 0;
    if (n/10 > 10) {
      int a, b, c;
      a = n%10;
      n /= 10;
      b = n%10;
      n /= 10;
      while (n != 0) { // treat-all sequence
        c = n%10;
        n /= 10;
        if (a < b and b > c) ++count;
        a = b;
        b = c;
      }
    } 
    cout << count << endl;
  }
}

// would like to: not define a,b previously and do it inside while loop.
