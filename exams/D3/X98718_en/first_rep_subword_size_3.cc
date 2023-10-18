// Input: one line with a consecutive sequence of characters from {a,b}.
// Output: the first subword of size 3 which is repeated, and the position of the first character of the first repetition (indexing positions from 0).
// Obs: Read and treat the input character by character.

#include <iostream>
using namespace std;

int main() {
  char let1, let2, let3;
  bool found = false;
  int i = 0;
  int aaa = 0, aab = 0, aba = 0, abb = 0, baa = 0, bab = 0, bba = 0, bbb = 0;
  cin >> let1 >> let2;
  while (not found and cin >> let3) { // search algorithm
    if (let1 == 'a') {
      if (let2 == 'a') {
        if (let3 == 'a') ++aaa;
        else ++aab;
      }
      else {
        if (let3 == 'a') ++aba;
        else ++abb;
      }
    }
    else {
      if (let2 == 'a') {
        if (let3 == 'a') ++baa;
        else ++bab;
      }
      else {
        if (let3 == 'a') ++bba;
        else ++bbb;
      }
    }
    if (aaa > 1 or aab > 1 or aba > 1 or abb > 1 or baa > 1 or bab > 1 or bba > 1 or bbb > 1) found = true;
    else {
      let1 = let2;
      let2 = let3;
      ++i;
    }
  }
  cout << let1 << let2 << let3 << ' ' << i << endl;
}
