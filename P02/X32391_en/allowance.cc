// Input: three naturals d ≥ 0, n ≥ 0 and t> 0, which represent fixed weekly expenses, the initial savings, and the number of weeks with 
//  allowance, respectively.
//  Following, there are the quantities corresponding to the t weekly allowances a1, ..., at . Every week allowance is a natural number ai≥ 0.
// Output: natural number indicating  the number of weeks which end up with a strictly positive balance, after paying the weekly expenses.

#include <iostream>
using namespace std;

int main() {
  int exp, sav, weeks;
  cin >> exp >> sav >> weeks;

  int pos = 0;
  for (int i = 0; i < weeks; ++i) {
    int allow;
    cin >> allow;

    sav += allow - exp;
    if (sav > 0) pos = pos + 1;
  }
  cout << pos << endl;
}
