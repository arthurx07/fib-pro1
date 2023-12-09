#include <iostream>
using namespace std;


bool is_palindrome(const string& s) {
  int n = s.size();
  int i = 0;
  int last = n-1;

  bool palindrome = true;
  while (palindrome and i < last) {
    if (s[i] != s[last]) palindrome = false;
    ++i;
    --last;
  }
  return palindrome;
}
