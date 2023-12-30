// Selection sort algorithm
#include <vector>
using namespace std;

void swap(double& a, double& b) {
  double c = a;
  a = b;
  b = c;
}

void selection_sort(vector<double>& v) {
  int s = v.size();
  for (int i = 0; i < s; ++i) {
    int jmin = i;
    for (int j = i; j < s; ++j) {
      if (v[j] < v[jmin]) jmin = j;
    }
    swap(v[i], v[jmin]);
  }
}

// ended up writing this selection sort when trying to do 
//  insertion sort :)

// start from index 0
  // assign minimum value to index i.
  // while not the end of the vector:
    // if the value of current position is less than the minimum, assign it to the minimum
  // swap the current index with the minimum value, assuring all the 
  // indexes <= i are in ascending order.
  // i = i + 1
