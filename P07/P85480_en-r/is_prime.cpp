#include <iostream>
#include <vector>
using namespace std;

bool is_prime(int p) {
  if (p == 0 or p == 1) return false;
  for (int i = 2; i*i <= p; ++i) {
    if (p%i == 0) return false;
  }
  return true;
}

int main() {
  int n;
  cin >> n;

  cout << is_prime(n) << endl;
}
