// Input: A sequence of prime (natural) numbers, ended with a non-rime number.
// Output: For every given prime number, print in a line the next prime number.

#include <iostream>
using namespace std;

bool is_prime(int p) {
  if (p == 1 or p == 0) return false;
  for (int i = 2; i*i <= p; ++i) { // as i <= sqrt(p)   <=>   i^2 <= sqrt(p)^2   <=>   i^2 <= p;
    if (p%i == 0) return false;
  }
  return true;
}

int main() {
  int p;
  while (cin >> p and is_prime(p)) {
    while (not is_prime(p+1)) ++p;
    cout << p+1 << endl;
  }
}
