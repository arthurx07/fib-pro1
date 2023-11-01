// Input: several sequences. Each sequence begins with its number of elements n > 0,
//  followed by n integer numbers.
// Output: max of every seq, one per line.

#include <iostream>
using namespace std;

int main() {
  int n;
  while (cin >> n) { // treat-all sequence
    int x, max;
    cin >> max;
    for (int i = 0; i < n - 1; ++i) { // treat-all elements
      cin >> x;
      max += (x - max)*(x > max); // if (x > max) max += (x - max)
      // if (x > max) max = x;
    }
    cout << max << endl;
  }
}
