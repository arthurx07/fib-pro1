// Input: Three integer numbers in one line.
// Output: If one of the three numbers equals the average of the other two, prints YES. Otherwise, prints NO.

#include <iostream>
using namespace std;

int main() {
  int a,b,c; // we work with real numbers (avg divisions); though we could also use the module
  bool found = false;
  cin >> a >> b >> c;

  if ((a + b)/2.0 == c) found = true;
  else if ((a + c)/2.0 == b) found = true;
  else if ((b + c)/2.0 == a) found = true;

  if (found) cout << "YES" << endl;
  else cout << "NO" << endl;
}

// if input is integer, can't read them as double
