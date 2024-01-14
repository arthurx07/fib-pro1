// Write a program that reads pairs of numbers n and m with n >= m, and for each pair prints Hn − Hm, with 10 digits after 
// the decimal point. Hn = 1/1 + 1/2 + ⋯ + 1/n.

#include <iostream>
using namespace std;

int main() {
  cout.setf(ios::fixed);
  cout.precision(10);

  int n, m;
  while (cin >> n >> m) {
    double hsubs = 0;
    for (int i = n; i > m; --i) hsubs += 1.0/i;
    cout << hsubs << endl;
  }
}

// execution error: number is too big.
// solution: H5 - H3 = (1/1 + 1/2 + 1/3 + 1/4 + 1/5) - (1/1 + 1/2 + 1/3) = (1/4 + 1/5)
