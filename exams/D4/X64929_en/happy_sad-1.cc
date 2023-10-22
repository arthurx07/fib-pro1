// Input: one line with a sequence of characters from {’-’, ’:’, ’(’, ’)’}
// Output: two numbers separated by a space, the happiness and sadness levels of the input text.
// Obs: do not use strings
// :-), (-: -> happy; :-(, )-: -> sad

#include <iostream>
using namespace std;

int main() {
  char a, b, c;
  cin >> a >> b;

  int happy = 0, sad = 0;
  while (cin >> c) { // treat-all algorithm
    if (a == ':' and b == '-' and c == ')') ++happy;
    else if (a == ':' and b == '-' and c == '(') ++sad;
    else if (a == '(' and b == '-' and c == ':') ++happy;
    else if (a == ')' and b == '-' and c == ':') ++sad;
    a = b;
    b = c;
  }
  cout << happy << ' ' << sad << endl;
}

