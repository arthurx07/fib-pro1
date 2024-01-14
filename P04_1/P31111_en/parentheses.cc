// Input: sequence of parentheses.
// Output: “yes” or “no”, depending on whether the parentheses close correctly or not.

#include <iostream>
using namespace std;

int main() {
  char p;
  int count = 0; // also can be done with two var, open and close
  while (count >= 0 and cin >> p) { // search algorithm
    if (p == '(') count += 1;
    else count -=1;
  }
  if (count == 0) cout << "yes" << endl;
  else cout << "no" << endl;
}
