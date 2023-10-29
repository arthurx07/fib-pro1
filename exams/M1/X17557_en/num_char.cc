// Input: sequence of characters over {a,b,c,d}, in just one line.
// Output: two natural numbers, in one line, and separated by a white space:
//    - the number of c’s that have an a before and no b between them.
//    - the number of d’s that have an a after and no b between them.

#include <iostream>
using namespace std;

int main() {
  char let;
  int c = 0, d = 0, d_prov = 0;
  bool a = false;
  bool b = false;
  while (cin >> let) { // treat-all algorithm
    if (let == 'a') {
      a = true;
      b = false;
      d = d_prov;
    }
    else if (let == 'b') {
      b = true;
      d_prov = d;
    }
    else if (let == 'c' and a and not b) ++c;
    else if (let == 'd') ++d_prov;
  }
  cout << c << ' ' << d << endl;
}

// problem not finished during mock exam, didn't have enough time. :(

// if a -> count all previous d
// if d _ a -> count all d
// if d _b_ a -> count no d
