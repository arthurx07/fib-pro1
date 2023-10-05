// Donat un natural n≥ 2 seguit de n nombres reals x1, x2,…, xn, calculi la variança dels nombres fent servir la fórmula:
//  (1/n−1) ∑(i=1,n) xi^2 − (1/n(n−1)) (∑(i=1,n) xi)^2
// Output: variança n dels nombres donats amb exactament dos dígits desprès del punt decimal. 

#include <iostream>
using namespace std;

int main() {
  cout.setf(ios::fixed);
  cout.precision(2);

  int n;
  cin >> n;

  double s = 0;
  double s2 = 0;
  for (int i = 0; i < n; ++i) {
    double m;
    cin >> m;
    s += m;
    s2 += m*m;
  }
  cout << s2/(n-1) - s*s/(n*(n-1)) << endl;
}
