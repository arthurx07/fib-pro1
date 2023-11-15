// Input: printable character, like a letter, digit or punctuation mark.
// Output: tells if the character is a letter, vowel, consonant, uppercase letter,
//  lowercase letter and a digit.

#include <iostream>
using namespace std;

void print_line(char c, string s, bool b) {
  cout << s << "('" << c << "') = ";
  if (b) cout << "true" << endl;
  else cout << "false" << endl;
}

bool is_letter(char c) {
  return ((c >= 'A' and c <= 'Z') or (c >= 'a' and c <= 'z'));
}

bool is_uppercase(char c) {
  return (c >= 'A' and c <= 'Z');
}

bool is_vowel(char c) {
  return ((c == 'A' or c == 'E' or c == 'I' or c == 'O' or c == 'U') or (c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u'));
}

bool is_digit(char c) {
  return (c >= '0' and c <= '9');
}

int main() {
  char c;
  bool letter, uppercase, lowercase, vowel, consonant, digit;
  letter = uppercase = lowercase = vowel = consonant = digit = false;
  cin >> c;

  letter = is_letter(c);
  if (letter) {
    uppercase = is_uppercase(c);
    if (not uppercase) lowercase = true;
    vowel = is_vowel(c);
    if (not vowel) consonant = true;
  }
  else digit = is_digit(c);

  print_line(c, "letter", letter);
  print_line(c, "vowel", vowel);
  print_line(c, "consonant", consonant);
  print_line(c, "uppercase", uppercase);
  print_line(c, "lowercase", lowercase);
  print_line(c, "digit", digit);
}
