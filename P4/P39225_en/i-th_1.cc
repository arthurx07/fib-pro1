// Input: number i, followed by the sequence x1, …, xn ended with −1. It is known that 1 ≤ i ≤ n.
// Ouput: content of the position i as it is shown in the examples.

#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int m;
  for (int i = 0; i < n; ++i) cin >> m;
  cout << "At the position " << n << " there is a(n) " << m << '.' << endl;
}
