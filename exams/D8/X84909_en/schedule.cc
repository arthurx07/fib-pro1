// Input: an unknown number of listing: subject name day start_time end_time. day is {monday,tuesday,wednesday,thursday,friday} and h1<h2 are {0,...,24}

// Output: two tables as shown in the examples. One listing the number of classes given at each hour of the week. The other showing the number of different
//  teachers giving class at each hour of the week (that is, the number of teachers giving class that hour and day after having removed repetitions).
//  Finally, a natural which is the minimum number of hours of class where we need to replace a current professor with a new one in order to avoid conflicts, 
//  that is, in order to prevent any teacher from being giving two classes simultaneously.

#include <iostream>
#include <vector>
#include <algorithm> // to use sort();
using namespace std;

struct Slot {
  vector<string> listsubjects;
  vector<string> listteachers;
};

typedef vector< vector<Slot> > TableSlots;

// Post: Count digits of n. cout w-n spaces. cout n
void schedule_print(int n, int w) {
  int c = (n == 0); // si n = 0, c = 1. sinó c = 0.
  int m = n;
  while (m != 0) {
    m /= 10;
    ++c;
  }

  for (int i = 0; i < w - c; ++i) cout << ' ';
  cout << n;
}

// Post: count of different elements in vector with size > 0
int diff_elems(vector<string>& v, int s) { // s is v.size()
  if (s == 0) return 0;
  else {
    int diff = 1; // sum one as first index is always different
    sort(v.begin(), v.end()); // bool function not necessary as sort is w/ two strings: return a > b
    for (int i = 1; i < s; ++i) {
      if (v[i] != v[i - 1]) ++diff;
    }
    return diff;
  }
}

int main() {
  int nhours = 24, ndays = 5;
  int hmax = 0, hmin = 24;
  TableSlots table(nhours, vector<Slot>(ndays)); // 24 hour, 5 day matrix
  vector<string> week = {"monday", "tuesday", "wednesday", "thursday", "friday"}; // List-initialization since C++11

  int h1, h2;
  string subj, name, day;
  while (cin >> subj >> name >> day >> h1 >> h2) {
    Slot s;

    int wi = 0;
    while (week[wi] != day) ++wi;

    for (int i = h1; i < h2; ++i) {
      table[i][wi].listsubjects.push_back(subj);
      table[i][wi].listteachers.push_back(name);
    }
    
    if (h1 < hmin) hmin = h1;
    if (h2 > hmax) hmax = h2;
  }

  cout << "number of subjects per slot:" << endl;
  cout << " h    monday   tuesday wednesday  thursday    friday" << endl;
  for (int i = hmin; i < hmax; ++i) {
    schedule_print(i, 2); // print current hour (i)
    for (int j = 0; j < ndays; ++j) {
      schedule_print(table[i][j].listsubjects.size(), 10);
    }
    cout << endl;
  }

  int csum = 0; // conflicts sum

  cout << "number of teachers per slot:" << endl;
  cout << " h    monday   tuesday wednesday  thursday    friday" << endl;
  for (int i = hmin; i < hmax; ++i) {
    schedule_print(i, 2); // print current hour (i)
    for (int j = 0; j < ndays; ++j) {
      int lt_size = table[i][j].listteachers.size();
      int diff_teach = diff_elems(table[i][j].listteachers, lt_size);

      csum += lt_size - diff_teach;
      schedule_print(diff_teach, 10);
    }
    cout << endl;
  }

  cout << "number of replacements needed to avoid conflicts:" << endl;
  cout << csum << endl;
  
}
/* Notes:
 * about push_back to a matrix (vector of vectors): I think it adds another entirely new vector, adding +1 dimension to the matrix [not tested]

 * how-to cout vector contents: 
 * for (int k = 0; k < table[i][j].listsubjects.size(); ++k) cout << table[i][j].listsubjects[k];
 * cout << ' ';
 * for (int k = 0; k < table[i][j].listteachers.size(); ++k) cout << table[i][j].listteachers[k];
 * cout << endl;
*/
