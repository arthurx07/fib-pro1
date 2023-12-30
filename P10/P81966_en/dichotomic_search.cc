// Write an efficient recursive function that returns the position of x in the subvector v[left..right]. 
//  The function must return −1 if x does not belong to v[left..right] or if left > right.

#include <vector>
using namespace std;

// pre: The vector v is sorted in strictly increasing order. Moreover, we have 0 ≤ left ≤ size of v and −1 ≤ right < size of v.
int position(double x, const vector<double>& v, int left, int right) {
  if (left > right) return -1;
  int i = (left + right)/2;
  if (x < v[i]) return position(x, v, left, i-1);
  else if (x > v[i]) return position(x, v, i+1, right);
  else return i; // found
}
