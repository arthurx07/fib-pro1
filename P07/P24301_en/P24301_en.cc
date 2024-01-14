// Concatenation of vectors
// Write a function that returns the concatenation of v1 and v2. That is, you must return a vector with the elements of v1 followed by the elements of v2.

#include <iostream>
#include <vector>
using namespace std;

vector<int> concatenation(const vector<int> & V1, const vector<int> & V2) {
  int s1 = V1.size();
  int s2 = V2.size();
  vector<int> res(s1 + s2);
  for (int i = 0; i < s1; ++i) res[i] = V1[i];
  for (int j = 0; j < s2; ++j) res[j + s1] = V2[j];
  return res;
}
