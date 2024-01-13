// Vector of mountains
// Input: natural n≥ 3 indicating the number of points in the mountainous profile. Following, there are the n heights registred at those points.
//  The heights are integer numbers. 
// Output: Indicate the total number of mountain peaks for the profile described in the input, and their height. Then print the height of those peaks that
//  are higher than the last peak in the described profile. The cases of a profile not having any peak, or not having peaks higher than the last one,
//  should be noted conveniently.

#include <iostream>
#include <vector>
using namespace std;

// pre: |v|≥ 3
// post: returns a vector containing the height of all the peaks in v (in the same order)
vector<int> obtain_peaks(const vector<int>& v) {
  vector<int> w;
  for (int i = 1; i < v.size() - 1; ++i) {
    if (v[i] > v[i+1] and v[i] > v[i-1]) w.push_back(v[i]);
  }
  return w;
}

int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; ++i) cin >> v[i];

  vector<int> w = obtain_peaks(v);
  cout << w.size() << ":";
  for (int i = 0; i < w.size(); ++i) cout << ' ' << w[i]; //if (w.size() != 0) {
  cout << endl;

  bool match = false;
  for (int j = 0; j + 1 < w.size(); ++j) { // if (w_size != 0) {
    if (w[j] > w[w.size() - 1]) {
      if (match) cout << ' ';
      cout << w[j];
      match = true;
    }
  }
  if (not match) cout << '-';
  cout << endl;
}

// solve problem when w.size() = 0, in line 34:
    // if w.size()=0 -> w.size() - 1 is undefined and leads to errors
    // otherwise, we can do [j < w.size() - 1 <=> j + 1 < w.size()]
    // then it works, without testing with conditions if w.size() != 0
