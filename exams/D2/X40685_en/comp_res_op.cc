// Reads boolean expressions of comparison between an arithmetic operation between naturals and a natural number, and determines if they evaluate
//  to true or false
// Input: NUM1 OPERATOR NUM2 COMPARATOR NUM3 -> NUM* are naturals, OPERATOR is {+,-,*}, COMPARATOR is a {<,>,<=,>=,==,!=}
// Output: true or false, resulting from evaluatin the boolean expression represented by the line.

#include <iostream>
using namespace std;

int main() {
  int n, m, r;
  char op;
  string comp;
  while (cin >> n >> op >> m >> comp >> r) {
    int expr = 0;
    if (op == '+') expr = n + m;
    else if (op == '-') expr = n - m;
    else expr = n*m; // if (op == '*') 

    if (comp == "<") expr = expr < r;
    else if (comp == ">") expr = expr > r;
    else if (comp == "<=") expr = expr <= r;
    else if (comp == ">=") expr = expr >= r;
    else if (comp == "==") expr = expr == r;
    else expr = expr != r; // if (comp == "!=") 

    if (expr) cout << "true" << endl;
    else cout << "false" << endl;
  }
}

// note: is it possible to do it by converting? char(op - '+')
