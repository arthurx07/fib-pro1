// Input: an arbitrary number of cases. Each one is a positive natural number in one line.
// Output: for each case, a line with the corresponding result of adding digits multiplied by their positions.
// Observation: For example, given 785902, the program will print 86, which is the result of evaluating 1×7+2×8+3×5+4×9+5×0+6×2.
//  Massive storage solutions are not accepted (like strings or vectors). Read numbers from the input into variables of type int;
//  for instance, with cin >> a, and solve the problem operating with integers using +, -, *, /, and %.

#include <iostream>
using namespace std;

int main() {
  int n;
  while (cin >> n) {
    int position = 0;
    for (int i = n; i > 0; i /= 10) ++position;

    int sum = 0;
    for (; n > 0; n /= 10) sum += (position--)*(n%10); // x-- first executes, then substracts one

    cout << sum << endl;
  }
}
