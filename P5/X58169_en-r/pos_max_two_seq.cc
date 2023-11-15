// Input: two sequences s1 & s2 of non negative integers ending in 0. s1 is not empty,
//  but s2 may be.
// Output: maximum element m in s1, position of the latest occurrence of m in s1, and the 
//  position of the first occurence of m in s2 (- if not in s2)

#include <iostream>
using namespace std;

void infoSequence(int& max, int& lpos) {
  int x;
  int i = 1;
  while (cin >> x and x != 0) {
    if (x > max) { 
      max = x;
      lpos = i;
    }
    ++i;
  }
}

int main() {

}
