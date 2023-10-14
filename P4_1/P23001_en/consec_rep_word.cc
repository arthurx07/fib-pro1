// input: non-empty sequence of words.
// output: number of words of the longest consecutive subsequence that only contains the first word.

#include <iostream>
using namespace std;

int main() {
  string first;
  cin >> first;

  string next;
  int length = 1;
  int longest = 1;
  while (cin >> next) { // treat-all algorithm
    if (first != next) length = 0;
    else {
      length += 1;
      if (length > longest) longest = length;
    }
  }
  cout << longest << endl;
}
