// Input : Input consists of several sequences, each one in a line. Each sequence consists of a natural number n, followed by n natural numbers x1, …, xn.
// Output: For each input sequence, print “yes” or “no” depending on if it is possible to find two elements xi and xj (with i ≠ j) 
//  such that xi + xj is a prime number.

// Obs: Using arrays, it is possible to precompute which numbers are prime and which are not up to a certain maximum. In this exercice it is not possible
//  because we do not know any maximum, and it is not necessary for efficiency reasons because all the numbers are small enough.

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
  while (cin >> n) {
    vector<int> v(n);
    for (int i = 0; i < n; ++i) cin >> v[i];

    int j = 0;
    bool found = false;
    while (not found and j < n) {
      int k = 0;
      while (not found and k < n) {
        if (j != k and is_prime(v[j] + v[k])) found = true;
        ++k;
      }
      ++j;
    }

    if (found) cout << "yes" << endl;
    else cout << "no" << endl;
  }
}
