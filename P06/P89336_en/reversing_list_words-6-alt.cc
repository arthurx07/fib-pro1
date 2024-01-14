// Input: sequence of words
// Output: if n denotes the total number of words, print the n/2 first words
// of the original sequence, in reverse order, and one per line.
// Observation: for the sake of practice, use recursion (not arrays)

#include <iostream>
using namespace std;

void reverse(int& n) {
  string s;
  if (cin >> s) {
    ++n;
    reverse(n);
    if (n <= 0) cout << s << endl;
    n -= 2;
  }
}

int main() {
  int n = 0;
  reverse(n);
}
