// Write a procedure that sorts v in non-decreasing order using the insertion sort algorithm.

#include <vector>
using namespace std;

void insertion_sort(vector<double>& v) { // search for minimum, then swap
  int s = v.size();
  for (int i = 1; i < s; ++i) {
    int j = i;
    double x = v[i];
    while (j > 0 and v[j - 1] > x) {
      v[j] = v[j - 1];
      --j;
    }
    v[j] = x;
  }
}

// suppose position 0 is sorted, assign i = 1. (next position)
  // assign x to the value of position i, and j to position i.
  // while j > 0 and the value of x is smaller than the value of the previous position:
    //  move the value of the previous position one step to the right
    //  j = j - 1
  // assign value x to index j.
  // i = i + 1 and repeat
