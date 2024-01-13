// Input: one or more non-emtpy sequences of positive natural numbers. Each sequence
//  is finalized by a 0. The end of the input is marked with an empty sequence.
// Output: Print how many sequences are similar to the first one, including the first.
// Obs: similar -> the sum is equal and they both finalize with the same number

#include <iostream>
using namespace std;

void info_sequence(int& sum, int& last) {
  int n;
  while (cin >> n and n != 0) {
    sum += n;
    last = n;
  }
}

int main() {
  int sum1 = 0, last1 = 0;
  info_sequence(sum1, last1);

  int n, similar = 1; // including the first one
  while (cin >> n) {
    int sum, last;
    sum = last = n;
    info_sequence(sum, last);

    if (sum == sum1 and last == last1) ++similar;
  }
  cout << similar << endl;
}
