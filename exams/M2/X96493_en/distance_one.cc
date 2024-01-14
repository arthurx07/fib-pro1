// Implement a function which receives a vector of integers satisfying the following property. Any pair of consecutive values in the vector are at
//  a distance less than or equal to 2 from each other. Moreover, there is only one pair of consecutive values which are exactly at distance 1.
#include <vector>
#include <algorithm>

using namespace std;

// Pre: Sigui n el tamany v.size(). Llavors, per a cada i a {0..n-2}, es compleix |v[i]-v[i+1]|<=2.
//      A més, només hi ha un i a {0..n-2} que compleixi |v[i]-v[i+1]|=1.
// Post: La funció retorna el i praticular que compleix |v[i]-v[i+1]|=1.
int positionDistance1(const vector<int> &v) {
  int left = 0;
  int right = v.size() - 1;
  while (left < right) {
    int i = (left + right + 1)/2;
    if (v[i]%2 == v[0]%2) left = i;
    else right = i - 1;
  }
  return left;
}
