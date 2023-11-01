// Input: n>=1, followed by 2n natural numbers a1,b1,..,an,bn.
// Ouput: A,B or = depending on who wins or if it's a tie.

#include <iostream>
using namespace std;

int main() {
  int n, x, mid, mid_prev = 0, loser = -1;
  cin >> n;
  for (int i = 0; i < 2*n and loser < 0; ++i) {
    cin >> x;
    if (x%2 == 0 and x != 0) loser = i%2;
    else {
      int dig, num = x;
      cout << "x: " << x;
      while (num != 0) { num /= 10; ++dig; }
      while (dig != 0) { mid = x%10; x /= 10; --dig; }
      if (x == 0) mid = 0;
      if (i != 0 and mid != mid_prev) loser = (i%2);
      cout << " mid: " << mid << endl;
      mid_prev = mid;
    }
  }
  if (loser == 0) cout << 'B' << endl;
  else if (loser == 1) cout << 'A' << endl;
  else cout << '=' << endl;
}
