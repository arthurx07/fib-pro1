// A natural number is called perfect if it is equal to the sum of all its divisors except itself.
#include <iostream>
using namespace std;

bool is_perfect(int x) {
  int sum = 0;
  for (int i = 2; i*i <= x; ++i) sum += (i + x/i)*(x%i == 0);
  return (x != 1) and (sum + 1 == x);
};
