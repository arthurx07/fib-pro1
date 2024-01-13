#include <iostream>
using namespace std;

int main() {
  int n;
  while (cin >> n) {
    int f = -1, q = 1000;
    factor(n, f, q);
    cout << f << ' ' << q << endl;
  }
  return 0;
}
