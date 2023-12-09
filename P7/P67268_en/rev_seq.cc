#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  while (cin >> n) {
      vector<int> a(n);
      for (int i=0; i<n; ++i) cin >> a[i];

      for (int j=n-1; j>0; --j) cout << a[j] << ' ';
      if (n > 0) cout << a[0]; // if (n>0) to fix empty vectors + fix last space
      cout << endl;
  }
}
