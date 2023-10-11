// Input: several words. The words “beginning” and “end” appear, at most, once.
// Output: number of words between the word “beginning” and the word “end”, if these appear in this order. 
// Otherwise, print “wrong sequence”.

#include <iostream>
using namespace std;

int main() {
  string word;
  bool start = false;
  bool stop = false;
  int sum = -1; // to not count "end"
  while (cin >> word and not stop) {
    if (start) sum += 1;
    if (word == "beginning") start = true;
    else if (word == "end") stop = true;
  }
  if (start and stop) cout << sum << endl;
  else cout << "wrong sequence" << endl;
}
