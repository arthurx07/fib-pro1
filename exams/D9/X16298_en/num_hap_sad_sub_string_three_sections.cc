// Number of happy and sad subsequences in a string with three sections
#include <string>
using namespace std;

int search_c1(int x, const string& A, int left, int right) { // binary search of c1
  while (left <= right) {
    int i = (left + right)/2;
    if (A[i] != A[x] and A[i+1] != A[x]) right = i - 1;
    else if (A[i] == A[x] and A[i+1] == A[x]) left = i + 1;
    else return i;
  }
  return -1;
}

int search_c3(int x, const string& A, int left, int right) { // binary search of c3
  while (left <= right) {
    int i = (left + right)/2;
    if (A[i] != A[x] and A[i+1] != A[x]) left = i + 1;
    else if (A[i] == A[x] and A[i+1] == A[x]) right = i - 1;
    else return i;
  }
  return -1;
}

// Pre: s is formed with three different characters c1,c2,c3, and is of the form c1...c1c2...c2c3...c3.
// Post: n1, n2, n3 are the number of occurrences of c1, c2, c3 in s, respectively.
// Needs to have logarithmic cost
void numberOccurrences(const string &s, int &n1, int &n2, int &n3) {
  int len = s.length();
  n1 = search_c1(0, s, 0, len - 1) + 1;
  n3 = len - search_c3(len - 1, s, 0, len - 1) - 1;
  n2 = len - n1 - n3;
}

// Pre: s begins with one or more occurrences of a character c1, followed by one or more
//      occurrences of a character c2, followed by one or more occurrences of a character c3,
//      and there are no more characters in s.
//      moreover, either c1c2c3 = ":-)" or c1c2c3 = "(-:" or c1c2c3 = ":-(" or c1c2c3 = ")-:".
// Post: If c1c2c3 = ":-)" or c1c2c3 = "(-:", the function returns the number of happy subsequences.
//       If c1c2c3 = ":-(" or c1c2c3 = ")-:", the function returns the number of sad subsequences.
int numberHappyOrSadSubsequences(const string &s) {
  int n1, n2, n3;
  n1 = n2 = n3 = 0;
  numberOccurrences(s, n1, n2, n3);
  return n1*n2*n3;
}
