#include <iostream>
using namespace std;

char encoded(char c, int k) {
  if (c == '_') return ' ';
  else if (c < 'a' or c > 'z') return c;
  else {
    c += 'A' - 'a';
    for (int i = 0; i < k%26; ++i) { // 26 letters in alphabet
      if (c == 'Z') c = 'A';
      else ++c;
    }
    return c;
  }
}

int main() {
  int k;
  while (cin >> k) {
    char c;
    while (cin >> c and c != '.') cout << encoded(c, k);
    cout << endl;
  }
}
