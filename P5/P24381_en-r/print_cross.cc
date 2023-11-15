#include <iostream>
using namespace std;


void cross(int n, char c) {
  for (int i = 0; i < n; ++i) {
    if (i == n/2) {
      for (int j = 0; j < n; ++j) cout << c;
    }
    else {
      for (int k = 0; k < n/2; ++k) cout << ' ';
      cout << c;
    }
    cout << endl;
  }
};


int main() {
  int n;
  char c;
  while (cin >> n >> c) cross(n, c);
  return 0;
}
