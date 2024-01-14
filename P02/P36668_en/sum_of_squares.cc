// Write a program that reads a natural number n, and prints the result of the following sum: 
// ∑(i=1, n) i^2. // 1^2 + 2^2 + … + (n−1)^2 + n^2 . 

#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int sum = 0;
  for (int i = 1; i <= n; ++i ) sum += i*i;

  cout << sum << endl;
}
