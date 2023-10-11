// Input: sequence of parentheses.
// Output: “yes” or “no”, depending on whether the parentheses close correctly or not.

#include <iostream>
using namespace std;

int main() {
  char p;
  int open = 0;
  int close = 0;
  bool last = true;
  while (cin >> p) {
    if (p == '(') open += 1;
    else close +=1;

    if (p == ')') last = true;
    else last = false;
  }
  if (open == close and last) cout << "yes" << endl;
  else cout << "no" << endl;
}
