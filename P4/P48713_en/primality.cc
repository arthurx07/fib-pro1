// Input: number n, followed by n natural numbers
// Output: For every given natural number, tell in a line if it is prime or not, following the format of the example.
// Hint: For every given n, at most about √n  steps are needed to know if it is prime or not.

#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; ++i) {
    int m;
    cin >> m;
    
    int j = 2;
    bool is_prime = (m != 1 and m!= 0); // 1 and 0 are not prime!!
    while (is_prime and j*j <= m) { // search algorithm
      // while (j <= √m) == (j*j <= m)
      is_prime = (m%j != 0); // if m%j == 0, returns false [is not prime]
      ++j;
    }

    if (is_prime) cout << m << " is prime" << endl;
    else cout << m << " is not prime" << endl;
  }
}

// a/b = c; a/c = b.
// Only checking 'b' (which always will be smaller than '√m') is necessary to prove the number is not prime.
// 'c', which is also a divisor of 'a', doesn't need to be checked; thus reducing times.
