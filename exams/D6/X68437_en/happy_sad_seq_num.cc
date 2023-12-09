#include <iostream>
using namespace std;

int numberSubsequences(const string &s, char c1, char c2, char c3) {
  int c1s, c2s, c3s;
  c1s = c2s = c3s = 0;
  int n = s.length();
  for (int i=0; i<n; ++i) {
    if (s[i] == c1) ++c1s;
    else if (s[i] == c2) c2s += c1s;
    else if (s[i] == c3 ) c3s += c2s;
  }
  return c3s;
}

int numberHappySubsequences(const string &s) {
  return numberSubsequences(s, ':', '-', ')') + numberSubsequences(s, '(', '-', ':');
}

int numberSadSubsequences(const string &s) {
  return numberSubsequences(s, ':', '-', '(') + numberSubsequences(s, ')', '-', ':');
}

int main() {
  string s;
  while (cin >> s) {
    cout << numberHappySubsequences(s) << ' ';
    cout << numberSadSubsequences(s) << endl;
  }
}
