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
    
    bool prime = (m != 1); // 1 is not prime
    int j = 2;
    // fins √m, o dit d'una altra manera j*j
    while (prime and j*j <= m) { // search algorithm
      if (m%j == 0) prime = false;
      prime = (m%j != 0); // if m%j == 0, n is not prime
      ++j;
    }

    if (prime) cout << m << " is prime" << endl;
    else cout << m << " is not prime" << endl;
  }
}
