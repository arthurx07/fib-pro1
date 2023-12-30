// Write a procedure that, supposing that all the positions of v, except maybe the last one, are in non-decreasing order, leaves v totally in non-decreasing order.
// For instance, if v is ⟨ 2, 4, 7, 7, 8, 9, 5⟩, it must become ⟨ 2, 4, 5, 7, 7, 8, 9⟩.

#include <vector>
using namespace std;

// pre: We have |v| ≥ 1. Moreover, the positions 0 to |v| − 2 of v are in non-decreasing order.
void insert(vector<double>& v) {
  int s = v.size();
  int i = s - 2;
  double x = v[s - 1];

  while (i >= 0 and v[i] > x) {
    v[i+1] = v[i];
    --i;
  }

  v[i+1] = x;
}
