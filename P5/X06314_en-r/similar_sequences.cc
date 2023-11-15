// Input: one or more non-emtpy sequences of positive natural numbers. Each sequence
//  is finalized by a 0. The end of the input is marked with an empty sequence.
// Output: Print how many sequences are similar to the first one, including the first.
// Obs: similar -> the sum is equal and they both finalize with the same number

#include <iostream>
using namespace std;

void info_sequence(int& sum, int& last) {
  int x;
  while (cin >> x and x != 0) {
    sum += sum;
    last = x;
  }
}

int main() {
  int x;
  while ()
}
