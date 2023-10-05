// Consider a chess board with r rows and c columns, where every square contains between 0 and 9 coins. 
// Write a program such that, given a chess board, computes the total number of coins on it.
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
      sum += n - '0'; // substract char '0' to char 'n'; to remove it's char condition and convert to int
    }
  }
  cout << sum << endl;
}

// Ratio: nloc 1.0, toks 1.0, dif 1.0, ccn 1.0 -> clavao!
