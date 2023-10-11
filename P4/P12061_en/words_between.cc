// Input: several words. The words “beginning” and “end” appear, at most, once.
// Output: number of words between the word “beginning” and the word “end”, if these appear in this order. 
// Otherwise, print “wrong sequence”.

#include <iostream>
using namespace std;

int main() {
  string word;
  bool start = false;
  int sum = 0; // to not count "end"

  while (cin >> word and word != "end") {
    if (start) ++sum;
    if (word == "beginning") start = true;
  }

  if (start and word == "end") cout << sum << endl;
  else cout << "wrong sequence" << endl;
}
