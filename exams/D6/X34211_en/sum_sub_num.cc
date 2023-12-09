#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> v(n);
  for (int i=0; i<n; ++i) cin >> v[i];

  string s;
  while (cin >> s) {
    int sum = 0;
    for (int j=0; j<n; ++j) {
      int sign = 1;
      if (s[j] == '-') sign = -1;
      sum += v[j]*sign;
    }
    cout << sum << endl;
  }
}
