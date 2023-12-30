// Write a function that returns the position of the maximum element of v[0..m]. If there is a tie, the smaller position must be returned.
#include <vector>
using namespace std;

// pre: 0 ≤ m < size of v.
int position_maximum(const vector<double>& v, int m) {
  int pos = 0;
  double max = v[0];

  for (int i = 1; i <= m; ++i) {
    if (v[i] > max) {
      pos = i;
      max = v[i];
    }
  }

  return pos;
}
