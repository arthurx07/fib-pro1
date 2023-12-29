#include <iostream>
#include <vector>
using namespace std;


typedef vector<char> Row;
typedef vector<Row> Rectangle;


void minimal_dimensions(char c, const Rectangle& r, int& rows, int& cols);


int main(){ 
  int n, m;
  while (cin >> n >> m) {
    Rectangle r(n, vector<char>(m));
    for (int i = 0; i < n; ++i)
      for (int j = 0; j < m; ++j) cin >> r[i][j];

    int t;
    cin >> t;
    while (t--) {
      char c;
      cin >> c;
      int rows, cols;
      minimal_dimensions(c, r, rows, cols);
      cout << rows << " " << cols << endl;
    }
  }
  return 0;
}
