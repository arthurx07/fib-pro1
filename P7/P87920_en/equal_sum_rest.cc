// Input: n>=1 followed by n integer numbers
// Output: for each case, tell if it has a number equal to the sum of the rest

#include <iostream>
#include <vector>
using namespace std;

bool equal_total_sum(const vector<int>& v, int n, int s) {
  for (int i = 0; i < n; ++i) {
    int s2 = s - v[i];
    if (s2 == v[i]) return true;
  }
  return false;
}

int main() {
  int n;
  while (cin >> n) {
    int sum = 0;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
      cin >> v[i];
      sum += v[i];
    }

    if (equal_total_sum(v, n, sum)) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
}
