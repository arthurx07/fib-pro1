// Input: natural number n, followed by n sequences of strictly positive natural numbers. Each sequence ends with a zero.
// Output: For each sequence, print the number of apirs of consecutive numbers such that the second number of the pair 
//  is greater than the first one.

#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    int x, y, pair = 0;
    cin >> x;
    while (x != 0 and cin >> y and y != 0) {
      pair += (y > x);
      x = y;
    }
    cout << pair << endl;
  }
}
