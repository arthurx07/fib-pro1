#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> a(n);
  for(int i=0; i<n; ++i) cin >> a[i];

  int sum = 0;
  for (int j=0; j<n-1; ++j) {
    if (a[j] == a[n-1]) sum += 1; // a[n-1] is last
  }
  cout << sum << endl;
}
