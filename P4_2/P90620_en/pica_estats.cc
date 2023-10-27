// A peak is an integer of the sequence that has a predecessor and a successor
//  and it is strictly greater than them.
// Input: sequence of integer numbers strictly positive ended with 0. At least, 
//  there are three integer numbers (not counting the 0)
// Output: YES if there is any peak greater than 3143, and NO otherwise.

#include <iostream>
using namespace std;

int main() {
  int a, b, x;
  cin >> a >> b;

  bool found = false;
  while (cin >> x and not found and x != 0) { // search algorithm
    if (b > a and b > x and b > 3143) found = true;
    else {
      a = b;
      b = x;
    }
  }
  if (found) cout << "YES" << endl;
  else cout << "NO" << endl;
}
