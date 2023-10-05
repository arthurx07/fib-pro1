// Consider a chess board with r rows and c columns, where every square contains between 0 and 9 coins. 
// Write a program such that, given a chess board, computes the total number of coins on its white squares.
//  Supose the upper left square is white.
// Input: r rows, c columns. follow r lines, each one with c characters between '0' and '9'.

#include <iostream>
using namespace std;

int main() {
  int r, c;
  cin >> r >> c;

  int sum = 0;
  for (int i = 0; i < r; ++i) {
    for (int j = 0; j < c; ++j) {
      char n;
      cin >> n;
      if ((i+j)%2 == 0) sum += n - '0';
    }
  }
  cout << sum << endl;
}

// white squares in even rows are in even columns and
// white squares in odd rows are in odd columns

// even + even = even; odd + odd = even

// Ratio nloc 1.0, toks 1.0, dif 1.0, ccn 1.0 -> clavao!
