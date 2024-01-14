// Input: sequence of words
// Output: if n denotes the total number of words, print the n/2 first words
// of the original sequence, in reverse order, and one per line.
// Observation: for the sake of practice, use recursion (not arrays)

#include <iostream>
using namespace std;

void reverse(int& n, int& i) {
  string s;
  if (cin >> s) {
    ++n;
    ++i;
    reverse(n, i);
    --i;
    if (i < n/2) cout << s << endl;
  }
}

int main() {
  int n = 0;
  int i = 0;
  reverse(n, i);
}
