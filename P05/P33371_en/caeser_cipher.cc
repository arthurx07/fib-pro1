// Input: Each case begins with a natural number k > 0, followed by a text made up of only lowercase letters and separator characters, but with no spaces, 
//  and ended with a dot.
// Output: For each case, print in a line the encrypted text, using uppercase letters. Replace each ‘_’ with a space, and leave unchanged the rest of 
//  separator characters.
#include <iostream>
using namespace std;

char encoded(char c, int k) {
  if (c == '_') return ' ';
  else if (c < 'a' or c > 'z') return c;
  else return 'A' + (c - 'a' + k)%('z' - 'a' + 1);
    // sum 'A' to make uppercase
    // (c - 'a' + k), remove lowercase from c, and sum the positions we want to move it to the right
    // ('z' - 'a' + 1) are the letters in alphabet. (mod 26)
    // take we have 6: (6+5)%26 is 11 // take we have 25: (25+5)%26 is 4
}

int main() {
  int k;
  while (cin >> k) {
    char c;
    while (cin >> c and c != '.') cout << encoded(c, k);
    cout << endl;
  }
}
