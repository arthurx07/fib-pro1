/* Write a program that, given five integers x,a,b,c,d, determines if x∈[a,b]∪[c,d];
    and texts "no" otherwise */

#include <iostream>
using namespace std;

int main() {
  int x, a, b, c, d;
  cin >> x >> a >> b >> c >> d;
  if ((x >= a and x <= b) or (x >= c and x <= d)) cout << "yes" << endl;
  else cout << "no" << endl;
}
