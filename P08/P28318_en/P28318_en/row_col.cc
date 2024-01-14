#include <iostream>
#include <vector>
using namespace std;
  
typedef vector<int> Row;
typedef vector<Row> Matrix;

void print_row(Matrix mx, int m, int r) {
  cout << "row" << ' ' << r+1 << ':';
  for (int i=0; i<m; ++i) {
    cout << ' ' << mx[r][i];
  }
  cout << endl;
}

void print_col(Matrix mx, int n, int c) {
  cout << "column" << ' ' << c+1 << ':';
  for (int i=0; i<n; ++i) {
    cout << ' ' << mx[i][c];
  }
  cout << endl;
}

void print_elem(Matrix mx, int r, int c) {
  cout << "element" << ' ' << r+1 << ' ' << c+1 << ':' << ' ' << mx[r][c] << endl;
}

int main() {
  int n, m;
  cin >> n >> m;
  Matrix mx(n,Row(m));

  for (int i=0; i<n; ++i) {
    for (int j=0; j<m; ++j) {
      cin >> mx[i][j];
    }
  }

  string s;
  while (cin >> s) {
    int x, y;
    if (s == "row") {
      cin >> x;
      print_row(mx, m, x-1);
    }
    else if (s == "column") {
      cin >> x;
      print_col(mx, n, x-1);
    }
    else if (s == "element") {
      cin >> x >> y;
      print_elem(mx, x-1, y-1);
    }
  }
}
