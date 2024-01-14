// Input: Each case begins with a line with two positive naturals n,m. Next, there are n lines with m characters each, chosen from {’:’,’-’,’)’}. 
//  Consecutive cases are separated by a blank line.
// Output: For each case, the program prints in one line the number of happy subsequences at increasing positions in the input matrix.
// Obs: Given a matrix M of n×m characters, a happy subsequence at increasing positions is a triple of positions (i1,j1),(i2,j2),(i3,j3) such that
//  M[i1][j1]=’:’, M[i2][j2]=’-’, M[i3][j3]=’)’ and 0≤i1<i2<i3<n and 0≤j1<j2<j3<m.

#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<char> > Mchar;
typedef vector< vector<int> > Mint;

int check(const Mint& mx, int i, int j) { // check if index is not lower than zero
  if (i < 0 or j < 0) return 0;
  return mx[i][j];
}

int triples_sum(const Mchar& mx, int n, int m) {
  Mint mx1 (n, vector<int>(m, 0));
  Mint mx2 (n, vector<int>(m, 0));
  Mint mx3 (n, vector<int>(m, 0));

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      int cell = mx[i][j];
      mx1[i][j] = check(mx1, i-1, j) + check(mx1, i, j-1) - check(mx1, i-1, j-1);
      mx2[i][j] = check(mx2, i-1, j) + check(mx2, i, j-1) - check(mx2, i-1, j-1);
      mx3[i][j] = check(mx3, i-1, j) + check(mx3, i, j-1) - check(mx3, i-1, j-1);

      if (cell == ':') mx1[i][j] += 1;
      else if (cell == '-') mx2[i][j] += check(mx1, i-1, j-1);
      else if (cell == ')') mx3[i][j] += check(mx2, i-1, j-1);
    }
  }
  return mx3[n-1][m-1]; // rightest-lowest cell
}

int main() {
  int n, m;
  while (cin >> n >> m) {
    Mchar mx(n, vector<char>(m));

    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) cin >> mx[i][j];
    }
    cout << triples_sum(mx, n, m) << endl;
  }
}

// drag possibilities to the rightest-lowest cell (~, not fully understanding it)
// C1:                  C2:                     C3:
// A B                  A B                     A B
// C X                  C X                     C X
// -> X=B+C-A           -> X=B+C-A              -> X=B+C-a
// -> if (X==c1) ++1    -> if (X==c2) ++c1(A)   -> if(X==c3) ++c2(A)
