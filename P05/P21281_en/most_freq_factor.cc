// Write a procedure to store in f the most frequent factor of n, and store in q how many times it appears. If there is a tie, choose the smallest factor.
//  For instance, if called with n = 450 = 2^1 · 3^2 · 5^2, the values after the call must be f =3 and q = 2.
#include <iostream>
using namespace std;

void factor(int n, int& f, int& q) {
  f = q = 0;
  for (int i = 2; i*i <= n; ++i) {
    int qi = 0;
    while (n%i == 0) {
      n /= i; // instead of trying if n divides i*i*... (j *= i), try how many times n divides i;
      ++qi;
    }
    if (qi > q) {
      f = i;
      q = qi;
    }
  }

  if (f == 0) {
    f = n;
    q = 1;
  }
};
