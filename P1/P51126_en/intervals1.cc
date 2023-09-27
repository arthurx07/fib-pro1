/* Write a program that, given two intervals, computes the interval corresponding to 
their intersection, or tells that it is empty. */
/* Input: Input consists of four integer numbers a1, b1, a2, b2 that represent the 
intervals [a1,b1] and [a2,b2]. Assume a1≤ b1 and a2≤ b2. */
// Print “[]” if their intersection is empty, or “[x,y]” if this is their non-empty intersection.
#include <iostream>
using namespace std;

// int main() {
//   int a1, b1, a2, b2;
//   cin >> a1 >> b1 >> a2 >> b2;
//
//   if (a1 > b2 or b1 < a2) cout << "[]" << endl;
//   else {
//     if (a1 > a2) cout << "[" << a1 << ",";
//     else cout << "[" << a2 << ",";
//
//     if (b1 < b2) cout << b1 << "]" << endl;
//     else cout << b2 << "]" << endl;
//   }
// }

int main() {
  int a1, b1, a2, b2, a3, b3;
  cin >> a1 >> b1 >> a2 >> b2;

  if (a1 >= a2) a3 = a1; // max between a1 and a2
  else a3 = a2;
  if (b1 <= b2) b3 = b1; // min between b1 and b2
  else b3 = b2;

  if (a3 > b3) cout << "[]" << endl; // if a1 > b2, or a2 > b1 [a3 > b3] -> there's no intersection
  else cout << '[' << a3 << ',' << b3 << ']' << endl;
}
