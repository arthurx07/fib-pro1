// Input: several cases. Each case starts with a line with two positive naturals n and m. After that come n lines with m characters, either 0 or 1,
//  which describe a matrix of size n×m, followed by an empty line.
// Output: For each case, the program must write the total number of non-empty square and constant submatrices in one line.

#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<char> > Mchar;
typedef vector< vector<int> > Mint;

int main() {
  int n, m;
  while (cin >> n >> m) {
    Mchar inp(n, vector<char>(m));
    Mint msum(n, vector<int>(m, 1));

    int sum = 0;
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) {
        cin >> inp[i][j];
        if (i > 0 and j > 0 and inp[i][j] == inp[i-1][j] and inp[i][j] == inp[i][j-1] and inp[i][j] == inp[i-1][j-1]) {
          msum[i][j] = 1 + min(msum[i-1][j], min(msum[i][j-1], msum[i-1][j-1])); // can we use min()?
        }
        sum += msum[i][j];
      }
    }
    cout << sum << endl;
  }
}

/*
  We define a map, where each cell, at first, counts 1.
  Then as we iterate through the matrix, we calculate the value of X depending of [i-1][j], [i][j-1], [i-1][j-1] (the previous cells top-left)

  X N N N N N     A A N N N     N N N N N
  N N N N N N     A X N N N     N B B N N
  N N N N N N     N N N N N     N B X N N
  N N N N N N     N N N N N     N N N N N

  In this example, if X(A) is a submatrix 2x2 (B[i-1][j-1]). And B[i-1][j] and B[i][j-1] are also submatrix 2x2:
    X(B) will also be a submatrix 2x2. And a submatrix 3x3.

  In the end, the output sum is the sum of all the values of the resulting matrix msum.

*/
