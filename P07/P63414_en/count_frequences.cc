// Input: natural number n, followed by n natural numbers between 1000000000 and 1000001000 (both included).
// Output: For each number x that appears in the sequence, print how many times it appears, following the format of the example.
//  The output must be sorted in increasing order by x.

#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> v(1001);
  for (int i = 0; i < n; ++i) {
    int f;
    cin >> f;
    ++v[f%10000]; // sum +1 to vector in index[f%4-last-digits]
  }

  for (int j = 0; j < 1001; ++j) {
    if (v[j] != 0) cout << 1000000000 + j << " : " << v[j] << endl; // sumar 1000000000 + j es muy ingenioso :)
  }
}
