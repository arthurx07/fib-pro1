// Input: The input has several cases. Each case starts with two positive natural numbers, n, m, in one line. After that comes a matrix of n×m digits 
//  (n lines with m digits each), followed by an empty line.
// Output: For each case, the program has to write n lines with m digits each, which is the resulting matrix, followed by an empty lines.
// Let i,j be a position in u, and let d be the digit in u[i][j]. Then, v[i][j] is the number of occurrences of d in u within row i, plus the number of 
//  occurrences of d in u within column j, and all of it *modulus 10* so that the result is again a digit.

#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<char> > Mchar;
typedef vector< vector<int> > Mint;

int main() {
  int n, m;
  while (cin >> n >> m) {
    Mchar u(n, vector<char>(m));
    
    Mint rcount(n, vector<int>(10)); // base 10
    Mint ccount(m, vector<int>(10));

    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) {
        cin >> u[i][j];
        int index = u[i][j] - '0';
        ++rcount[i][index];
        ++ccount[j][index];
      }
    }

    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) {
        int index = u[i][j] - '0';
        cout << (rcount[i][index] + ccount[j][index])%10;
      }
      cout << endl;
    }
    cout << endl;
  }
}

// ratios: 0.8 nloc, 0.8 toks, 0.8 dif, 0.8 ccn (6 vs 8)
