// Input: several sequences. Each sequence begins with its number of elements n > 0,
//  followed by n integer numbers.
// Output: max of every seq, one per line.

#include <iostream>
using namespace std;

int main() {
  int n;
  while (cin >> n) { // treat-all sequence
    int a;
    if (n > 0) { cin >> a; max = a; }
    for (int i = 0; i < n; ++i) { // treat-all elements
      cin >> a;
      if (a > max) max = a;
    }
    cout << max << endl;
  }
}
