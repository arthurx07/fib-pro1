// Input: n>=1, followed by 2n natural numbers a1,b1,..,an,bn.
// Ouput: A,B or = depending on who wins or if it's a tie.

#include <iostream>
using namespace std;

int getDigitCount(int x) {
  int count = 0, x_proc = x;
  while (x_proc != 0) {
    x_proc /= 10;
    ++count;
  }
  return count;
}

int main() {
  int n, x, count, mid, loser = -1, i = 0;
  cin >> n;
  while (i < 2*n and loser == -1) {
    cin >> x;
    count = getDigitCount(x);
    if (count%2 == 0 and x != 0) loser = i%2; // even digits, (0 has 1 digit)
    else {
      for (int j = 0; j < count/2; ++j) x /= 10;
      if (i != 0 and mid != x%10) loser = i%2; // mid not equal
      mid = x%10;
    }
    ++i;
  }

  if (loser == 0) cout << 'B' << endl; // b wins
  else if (loser == 1) cout << 'A' << endl; // a wins
  else cout << '=' << endl; // tie
}
