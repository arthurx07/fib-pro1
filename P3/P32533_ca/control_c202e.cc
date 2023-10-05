// Input: natural n ≥ 1
// Output: n*n files (com es mostra als exemples)

#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n - i - 1; ++j) cout << '+'; // first line is 7 +, not 8
    cout << '/';
    for (int k = 0; k < i; ++k) cout << '*';
    cout << endl;
  }
}


// alt. solution by pro1 teacher: (worse: 28.75 dif, 5 ccn vs 22.14 dif, 4 ccn)
// for (int j = 0; j < n; ++j) {
//   if (j < n - 1 -i) cout << '+';
//   else if (j == n - 1 - i) cout << '/';
//   else cout << '*';
// }
// cout << endl;
