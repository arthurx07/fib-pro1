#include <iostream>
using namespace std;

void spacedlines(int n, char c) {
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) cout << ' ';
    cout << c << endl;
  }
}

void cross(int n, char c) {
  spacedlines((n - 1)/2, c); // (n-1)/2 spaced lines at the beginning

  for (int i = 0; i < n; ++i) cout << c;
  cout << endl;

  spacedlines((n - 1)/2, c);
}
