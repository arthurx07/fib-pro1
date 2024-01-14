// Input: natural number n, followed by n words.
// Output: print last n words of the original sequence, in reverse order, and 
// one per line.
// Observation: for the sake of practice, use recursion (and not arrays)

#include <iostream>
using namespace std;

void reverse(int n, int& i) { // call by reference for i
  string s;
  if (cin >> s) {
    reverse(n, i);
    if (i < n) { 
      cout << s << endl;
      ++i;
    }
  } 
}

int main() {
  int n;
  cin >> n;

  int i = 0;
  reverse(n, i);
}
