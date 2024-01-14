// Input: has a prefixed expression. This means that operators always appear before their operands.
// Output: print a line with an integer number: the result of evaluating the given expression.
// Hint: Note that an expression is either a digit or an operator, followed by an expression, followed by another expression.

#include <iostream>
using namespace std;

int eval_expr() {
  char a;
  cin >> a;

  if (a == '*') return (eval_expr()*eval_expr());
  else if (a == '+') return (eval_expr() + eval_expr());
  else if (a == '-') return (eval_expr() - eval_expr());
  else return (a - '0'); // base case, a is an integer
}

int main() {
  cout << eval_expr() << endl;
}
