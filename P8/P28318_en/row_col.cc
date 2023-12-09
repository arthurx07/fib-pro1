#include <iostream>
#include <vector>
using namespace std;
  
typedef vector<int> Row;
typedef vector<Row> Matrix;

void print_row(Matrix mx, int m, int r) {
  cout << "row" << r << ":";
  for (int i=0; i<m; ++i) {
    cout << ' ' << mx[r][i];
  }
}

void print_col(Matrix mx, int n, int c) {
  cout << "column" << c << ":";
  for (int i=0; i<n; ++i) {
    cout << ' ' << mx[c][i];
  }
}

void print_elem(Matrix mx, int r, int c) {
  cout << "element " << r << ' ' << c << ": " << mx[r][c];
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
      print_row(mx, m, x);
    }
    else if (s == "column") {
      cin >> x;
      print_row(mx, n, x);
    }
    else if (s == "element") {
      cin >> x >> y;
      print_row(mx, x, y);
    }
  }
}
