// Input: n,m > 0 (n lines with m characters) --> characters are: :-()"v|^
// Output: for each case, the program prints ine one line the numbere of happy subwords contained in the input matrix
// Obs - happy\\  :-) (-: " ^
//                        | |
//                        v "

#include <iostream>
#include <vector>
using namespace std;

// Matrix declaration
typedef vector<char> Row;
typedef vector<Row> Matrix;

int num_happy(const Matrix& a, int n, int m) {
  int happy = 0;
  for (int i = 0; i < n; ++i) { // n is lines
    for (int j = 0; j < m; ++j) { // m is columns
      if (i >= 2) {
        if (a[i-2][j] == '"' and a[i-1][j] == '|' and a[i][j] == 'v') ++happy;
        else if (a[i-2][j] == '^' and a[i-1][j] == '|' and a[i][j] == '"') ++happy;
      }
      if (j >= 2) {
        if (a[i][j-2] == ':' and a[i][j-1] == '-' and a[i][j] == ')') ++happy;
        else if (a[i][j-2] == '(' and a[i][j-1] == '-' and a[i][j] == ':') ++happy;
      }
    }
  }
  return happy;
}

int main() {
  int n, m;
  while (cin >> n >> m) {
    Matrix a(n,Row(m));

    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) {
        cin >> a[i][j];
      }
    }

    cout << num_happy(a, n, m) << endl;
  }
} 
