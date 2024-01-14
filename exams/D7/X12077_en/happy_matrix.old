// Input: n,m > 0 (n lines with m characters) --> characters are: :-)
// Output: for each case, the program prints in one line the numbers of happy subsequences at increasing positions 
//  in the input matrix
// Obs: A happy subsequence at increasing positions is a triple of positions (i1,j1),(i2,j2),(i3,j3) such that 
//  M[i1][j1]=’:’, M[i2][j2]=’-’, M[i3][j3]=’)’ and 0≤i1<i2<i3<n and 0≤j1<j2<j3<m.

#include <iostream>
#include <vector>
using namespace std;

// Matrix declaration
typedef vector<char> Row;
typedef vector<Row> Matrix;

void sum_greater_index(Matrix& mx, int i, int j, int n, int m, int sum) {
  for (int k = i + 1; k < n; ++k) {
    for (int l = j + 1; l < m; ++l) mx[k][l] += sum;
  }
}

int num_happy_sub(const Matrix& a, int n, int m) {
  int happy = 0;
  Matrix b(n,Row(m));
  Matrix c(n,Row(m));
  for (int i = 0; i < n; ++i) { // n is lines
    for (int j = 0; j < m; ++j) { // m is columns
      if (a[i][j] == ':') sum_greater_index(b, i, j, n, m, 1);
      else if (a[i][j] == '-') sum_greater_index(c, i, j, n, m, b[i][j]);
      else happy += c[i][j]; // if (a[i][j] == ')')
    }
  }
  return happy;
}

int main() {
  int n, m;
  while (cin >> n >> m) {
    Matrix a(n,Row(m));
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) cin >> a[i][j];
    }
    cout << num_happy_sub(a, n, m) << endl;
  }
} 

/* Note:
  Matrix b(n, Row(m)) is the same as Matrix b(n, Row(m, 0)) // when not specifying value, the initial value is 0
  
  When declaring with typedef an empty (value 0) matrix, printing it won't produce any output. Though it's filled with zeroes.
  If you want to print it use:
    vector< vector<int> > my_matrix(n, vector<int>(m, 0));
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) cout << my_matrix[i][j] << " ";
      cout << endl;
    }
*/
