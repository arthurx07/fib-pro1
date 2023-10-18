// Input: one line with a sequence of consecutive characters from {a,b,c,d}.
// Output: first character which occurs twice or more in the input, and the position of the first repetition (indexing positions from 0).

#include <iostream>
using namespace std;

int main() {
  char let;
  bool found = false;
  int i = 0, a_sum = 0, b_sum = 0, c_sum = 0, d_sum = 0;
  while (not found and cin >> let) { // search algorithm
    if (let == 'a') ++a_sum;
    else if (let == 'b') ++b_sum;
    else if (let == 'c') ++c_sum;
    else if (let == 'd') ++d_sum;

    if (a_sum > 1 or b_sum > 1 or c_sum > 1 or d_sum > 1) found = true;
    else ++i;
  }
  cout << let << ' ' << i << endl;
}
