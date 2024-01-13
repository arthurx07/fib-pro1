#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int num, den;
    read_rational(num, den);
    cout << num << ' ' << den << endl;
  }
  return 0;
}
