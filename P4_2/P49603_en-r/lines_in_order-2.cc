// Input: sequence of lines with words. Each line begins with a number n, followed by n words made up of
//  only lowercase letters.
// Ouput: Index of the first line with the words in (not necessary strictly) increasing order. If there
//  is no such line, tell so.

#include <iostream>
using namespace std;

int main() {
  int x;
  int i = 0;
  int last = 0;
  bool incr = false;
  while (cin >> x) { // treat-all algorithm
    incr = true;
    if (x > 0) { // if x = 0; do nothing
      string elem, prev;
      cin >> prev;
      for (int j = 1; j < x; ++j) { // search algorithm, but needs to loop through all elements to start
        // the new sequence
        cin >> elem;
        if (incr and elem < prev) incr = false; // when incr = false, doesn´t compare and 
          // doesn´t enter loop
        else if (incr) prev = elem; // check true/false "faster" than copying variable
      }
    }
    ++i;
    if (incr) last = i;
  }
  if (last > 0) cout << "The last line in increasing order is " << last << "." << endl;
  else cout << "There is no line in increasing order." << endl;
}
