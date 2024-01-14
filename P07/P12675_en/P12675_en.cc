// Common elements
// Write a functionthat given two vectors X and Y in increasing order, returns the number of common elements in the two vectors, that is,
//  the number of integer numbers a such that a=X[i]=Y[j] for any i and j.

#include <iostream>
#include <vector>
using namespace std;

int common_elements(const vector<int>& X, const vector<int>& Y) {
  int sx = X.size();
  int sy = Y.size();

  int i = 0, j = 0, sum = 0;
  while (i < sx and j < sy) {
    if (X[i] == Y[j]) {
      ++sum;
      ++i;
    }
    else if (X[i] > Y[j]) ++j;
    else ++i;
  }
  return sum;
}
