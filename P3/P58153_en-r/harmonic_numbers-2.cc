// Write a program that reads pairs of numbers n and m with n >= m, and for each pair prints Hn − Hm, with 10 digits after 
// the decimal point. Hn = 1/1 + 1/2 + ⋯ + 1/n.

#include <iostream>
using namespace std;

int main() {
  cout.setf(ios::fixed);
  cout.precision(10);

  int n, m;
  while (cin >> n >> m) {
    double hn = 0;
    double hm = 0;
    for (int i = 1; i <= n; ++i) hn += 1.0/i;
    for (int j = 1; j <= m; ++j) hm += 1.0/j;

    cout << hn - hm << endl;
  }
}
