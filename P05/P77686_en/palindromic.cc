// Input: n natural number
// Output: true if n is palindromic, false otherwise.

#include <iostream>
using namespace std;


bool is_palindromic(int n) {
  int num = n, n_rev = 0;
  while (num != 0) { // reverse digits
    n_rev = n_rev*10 + num%10;
    num /= 10;
  }
  return (n == n_rev);
}
