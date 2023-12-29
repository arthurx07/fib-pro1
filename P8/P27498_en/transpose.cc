// Transposed matrix
// Write a procedure that transposes a square matrix m.

#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<int> > Matrix;

// post: interchange two values
void swap(int& a, int& b) {
  int t = a;
  a = b;
  b = t;
}

// pre: m is a square matrix n×n with n≥0.
void transpose(Matrix& M) {
  int n = M.size(); // square matrix
  for (int i = 0; i < n - 1; ++i) { // i cols
    for (int j = i+1; j < n; ++j) { // j rows
      swap(M[i][j], M[j][i]); // may also test if (i != j) [though performance may be worse for larger matrixes]
    }
  }
}

// n - 1, as index in vectors starts with 0
//
// j = i + 1:
//  - to start just with the index under the diagonal
//  - as the numbers above the diagonal have already been swapped previously
