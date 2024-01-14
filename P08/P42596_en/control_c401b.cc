// Input: non empty sequence of non empty matrices of integers. Each matrix is described with its size n > 0 and m > 0, followed by its n × m elements.
// Output: two lines indicating which is the maximum difference between the maximum element and minimum element of each matrix, and which is the first
//  matrix with this difference.

#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<int> > Matrix;

// post: given the non empty matrix mat, leaves at minimum and at maximum the elements minimum and maximum of mat, respectively.
void min_max(const Matrix& mat, int& minimum, int& maximum) {
  for (int i = 0; i < mat.size(); ++i) { // row index
    for (int j = 0; j < mat[0].size(); ++j) { // column index
      if (mat[i][j] > maximum) maximum = mat[i][j];
      else if (mat[i][j] < minimum) minimum = mat[i][j];
    }
  }
}

int main() {
  int n, m; // nxm matrix (n row, m col)
  int aux = 0, gdif = 0, idx = 0;
  while (cin >> n >> m) {
    Matrix mat(n, vector<int>(m)); // (nrows, ncols)
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) cin >> mat[i][j];
    }

    int max = mat[0][0];
    int min = mat[0][0];
    min_max(mat, min, max);

    if (max - min > gdif) {
      gdif = max - min;
      idx = aux;
    }
    ++aux;
  }

  cout << "la diferencia maxima es " << gdif << endl;
  cout << "la primera matriu amb aquesta diferencia es la " << idx + 1 << endl;
}
