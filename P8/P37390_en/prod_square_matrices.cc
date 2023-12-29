// Product of square matrices
// Write a function that, given two square matrices a and b, computes their product.

#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<int> > Matrix;

// pre: a and b are square matrices n×n with n ≥ 0. 
Matrix product(const Matrix& a, const Matrix& b) {
  int n = a.size();
  Matrix c(n, vector<int> (n));

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      for (int k = 0; k < n; ++k) c[i][j] += a[i][k]*b[k][j];
    }
  }
  return c;
}

// if a is a non-empty mxn matrix, b is a non-empty nxp matrix --> returns (axb) [an mxp matrix]

// c[i][j] is the sum of the multiplications at the position (i, j)
// given a position c[i][j], with i rows and j columns:
//  the algorithm iterates over the columns of a, and the rows of b for doing the multiplication
//  the row of a, as well as the column of b, is fixed for that iteration of c[i][j]

// c(i,j) = ai1b1j + ai2b2j + ... + ainbnj
//  for i = 1,...,m and j = 1,...,p
