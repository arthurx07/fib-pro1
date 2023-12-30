// Input: an arbitrary number of lines. Each line has one or more characters a or b, having as the last character a punctuation
//  sign . or ? or !. 
// Output: For each input line, write an integer to the terminal, which is the total number of sentences that appear immediately after 
//  questions, and that have strictly more as than bs.

#include <iostream>
using namespace std;

int main() {
  char n;
  int as = 0, bs = 0, sum = 0;
  bool quest = false;
  while (cin >> n) {
    if (n == 'a') ++as;
    else if (n == 'b') ++bs;
    else {
      if (quest and as > bs) ++sum;
      if (n == '?') quest = true;
      else quest = false;
      as = bs = 0;
    }
  }
  cout << sum << endl;
}

// dif ratio: 1.0 / ccn ratio: 0.9
