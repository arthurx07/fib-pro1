// Input: sequence of lowercase letters ended in ‘.’
// Ouput: Print “hello” if the input consecutively contains the letters ‘h’, ‘e’, ‘l’, ‘l’, ‘o’. Otherwise, print “bye”.

#include <iostream>
using namespace std;

int main() {
  char a, b, c, d, e;
  bool found = false;
  cin >> a >> b >> c >> d;
  while (cin >> e and not found and e != '.') { // search algorithm
    if (a == 'h' and b == 'e' and c == 'l' and d == 'l' and e == 'o') found = true;
    else { a = b; b = c; c = d; d = e; }
  }
  if (found) cout << "hello" << endl;
  else cout << "bye" << endl;
}
