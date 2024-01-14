/* Write a program that, given two intervals, tells if one is inside the other, and computes
the interval corresponding to their intersection, or tells that it is empty.
Input: Input consists of four integer numbers a1, b1, a2, b2 that represent the intervals 
  [a1,b1] and [a2,b2]. Assume a1≤ b1 and a2≤ b2.
Output: Print ‘=’ if the intervals are equal, ‘1’ if the first is inside the second 
  (but they are not equal), ‘2’ if the second is inside the first (but they are not equal), 
  or ‘?’ otherwise. Also, print “[]” if the intersection is empty, or “[x,y]” if this is 
  their non-empty intersection. */

#include <iostream>
using namespace std;

int main() { // intervals-1 + intervals-2
  int a1, b1, a2, b2, a3, b3;
  cin >> a1 >> b1 >> a2 >> b2;

  if (a1 == a2 and b1 == b2) cout << '=' << " , ";
  else if (a1 >= a2 and b1 <= b2) cout << '1' << " , ";
  else if (a1 <= a2 and b1 >= b2) cout << '2' << " , ";
  else cout << '?' << " , ";

  if (a1 >= a2) a3 = a1; // max between a1 and a2
  else a3 = a2;
  if (b1 <= b2) b3 = b1; // min between b1 and b2
  else b3 = b2;

  if (a3 > b3) cout << "[]" << endl; // if a1 > b2, or a2 > b1 [a3 > b3] -> there's no intersection
  else cout << '[' << a3 << ',' << b3 << ']' << endl;
}
