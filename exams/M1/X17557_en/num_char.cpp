// Input: sequence of characters over {a,b,c,d}, in just one line.
// Output: two natural numbers, in one line, and separated by a white space:
//    - the number of c’s that have an a before and no b between them.
//    - the number of d’s that have an a after and no b between them.

#include <iostream>
using namespace std;

int main() {
  char let;
  int countc = 0, countd = 0, countdb = 0, countda = 0;
  bool found_b = false;
  bool found_a = false;
  while (cin >> let) { // treat-all algorithm
    if (let == 'a') {
      found_a = true;
      found_b = false;
      countdb = 0;
      countd = countda;
    }
    else if (let == 'b') {
      found_b = true;
      countda -= countdb;
      countdb = 0;
    }
    else if (let == 'c' and found_a and not found_b) ++countc;
    else if (let == 'd') {
      ++countda;
      ++countdb;
    }
    cout << let << " d: " << countd << endl;
  }
  cout << countc << ' ' << countd << endl;
}

// problem not finished during mock exam, didn't have enough time. :(


// if a -> count all previous d
// if d _ a -> count all d
// if d _b_ a -> count no d
