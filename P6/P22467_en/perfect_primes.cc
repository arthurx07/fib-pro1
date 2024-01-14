// Given a natural number n, let s(n) be the sum of the digits of n. In this exercise, we say that n is a perfect prime if the infinite
//  sequence n, s(n), s(s(n)), …only contains prime numbers.
#include <iostream>
using namespace std;

int sum(int p) {
  if (p < 10) return p;
  return sum(p/10) + p%10;
}

bool is_perfect_prime(int n) {
  // check primality
  if (n == 0 or n == 1) return false;
  for (int i = 2; i*i <= n; ++i) {
    if (n%i == 0) return false;
  }

  if (n < 10) return true;
  return is_perfect_prime(sum(n));
}
