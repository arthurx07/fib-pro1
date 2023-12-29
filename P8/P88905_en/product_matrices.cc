// Product of matrices
// Write a function that, given two matrices a and b, computes their product.

#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<int> > Matrix;

// pre: a is a matrix p×q and b is a matrix q×r, with p,q,r≥1. 
Matrix product(const Matrix& a, const Matrix& b) {
  int p = a.size(); // a cols
  int q = a[0].size(); // a rows, b cols
  int r = b[0].size(); // b rows
  Matrix c(p, vector<int> (r)); // pxr (p col, r row)
  
  for (int i = 0; i < p; ++i) { // i col
    for (int j = 0; j < r; ++j) { // j row
      for (int k = 0; k < q; ++k) c[i][j] += a[i][k]*b[k][j];
    }
  }
  return c;
}
