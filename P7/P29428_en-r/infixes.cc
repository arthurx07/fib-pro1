// Input: natural number n followed by n different words p1,…,pn.
// Output: The program has to print a line for each p1,…,pn in this order. Each line starts with pi, followed by the symbol “:” and the list
//  of all the input words contained in pi, in the same order than the input. Notice that the list corresponding to each pi always includes pi,
//  since every word contains itself.

#include <iostream>
#include <vector>
using namespace std;

// pre: a.length() > b.length()
// post: true if a contains b
bool contains(string a, string b) {
  int j = 0;
  for (int i = 0; i < a.length(); ++i) {
    if (a[i] == b[j]) ++j;
    else if (j != b.length()) j = 0;
  }
  if (j == b.length()) return true;
  else return false;
}

int main() {
  int n;
  cin >> n;
  vector<string> words(n);
  for (int i = 0; i < n; ++i) cin >> words[i];

  for (int i = 0; i < n; ++i) {
    cout << words[i] << ':';
    for (int j = 0; j < n; ++j) {
      if (words[i].length() >= words[j].length() and contains(words[i], words[j])) cout << ' ' << words[j];
    }
    cout << endl;
  }
}
