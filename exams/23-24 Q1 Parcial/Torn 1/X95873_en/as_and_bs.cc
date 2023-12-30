// Input: an arbitrary number of lines. Each one has one or more characters a or b ending with a punctuation sign . or ? or !.
// Output: Two integers must be written in one line and separated by a space: the total number of a’s appearing in questions, and
//  the total number of b’s appearing in exclamations.
// Obs: Massive storage methods are forbidden, not even a simple string. The input has to be read character by character. In particular,
//  using getline or similar is forbidden, and the reason is obvious: in normal conditions, sentences would not be separated by newlines.
//  In fact, the input is separated by newlines only for presentation reasons. If you keep reading characters using cin >> c, it is irrelevant
//  if newlines happen in the input, since reading with cin skips them entirely.

#include <iostream>
using namespace std;

int main() {
  char c;
  int as, bs, at, bt;
  as = bs = at = bt = 0;
  while (cin >> c) {
    if (c == 'b') ++bt;
    else if (c == 'a') ++at;
    else {
      if (c == '?') as += at;
      if (c == '!') bs += bt;
      at = 0;
      bt = 0;
    }
  }
  cout << as << ' ' << bs << endl;
}

// dif ratio: 1.0 / ccn ratio: 1.0
