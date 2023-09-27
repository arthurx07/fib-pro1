/* Write a program that reads a letter, and that tells if it is an uppercase letter or a lowercase letter, 
and that also tells if it is a vowel or a consonant. Here, assume that the vowels are ‘a’, ‘e’, ‘i’, ‘o’ and ‘u’, 
and their corresponding uppercase letters. */

#include <iostream>
using namespace std;

int main() {
  char x;
  cin >> x;

  if (x >= 'a' ) cout << "lowercase" << endl;
  else cout << "uppercase" << endl;

  if (x == 'A' or x == 'a' or x == 'E' or x == 'e' or x == 'I' or x == 'i' or
  x == 'O' or x == 'o' or x == 'U' or x == 'u') cout << "vowel" << endl;
  else cout << "consonant" << endl;
}

// TODO: improve ccn [12 vs 3, 4x ratio T_T]
//    note: || is deprecated. use boolean operator or
//    SOLVED: when using 'or' instead of '||', program's ccn changes from 
//    12 to 3.
