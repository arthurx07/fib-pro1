// F004B. Stable products
// Input: sequence of pairs of natural numbers x and y. x ≥ 1, y ≥ 1, x * and ≤ 109 are fulfilled.
// Output: For each pair x and y, print which bases the product x * y is stable for. If there is not any base, print it.
//  It must print a line feed after the output of each case. Follow the format of the instance.
// Obs: If you do tests with random numbers and your program do not find any solution, do not worry: most products are not stable.

#include <iostream>
#include <vector>
using namespace std;

bool same_digits(int x, int y, int b) {// indicates if, in base b (2<=b<=16), (x, y) and (x*y) have the same digits
  vector<int> digxy(b);
  int xy = x*y;
  while (x > 0) {
    ++digxy[x%b];
    x /= b;
  }
  while (y > 0) {
    ++digxy[y%b];
    y /= b;
  }

  vector<int> digxpy(b);
  while (xy > 0) {
    ++digxpy[xy%b];
    xy /= b;
  }
  if (digxy == digxpy) return true;
  return false;
}


void write(int n, int b) { // outputs n in base b
  // en binario es demasiado largo (da la vuelta): for (int i = 1; n > 0; i *= 10) { nb += (n%b * i); n /= b;}
  int count = 1;
  for (int i = n; i/b > 0; i /= b) count *= b;
  while (count > 0) {
    int out = (n/count)%b;
    if (b > 10 and out >= 10) cout << char(out%10 + 'A');
    else cout << out;
    count /= b;
  }
}

int main() {
  int x, y;
  while (cin >> x >> y) {
    cout << "solutions for " << x << " and " << y << endl;
    bool none = true;
    for (int i = 2; i <= 16; ++i) {
      if (same_digits(x, y, i)) {
        none = false;
        write(x, i);
        cout << " * ";
        write(y, i);
        cout << " = ";
        write(x*y, i);
        cout << " (base " << i << ")" << endl;
      }
    }
    if (none) cout << "none of them" << endl;
    cout << endl;
  }
}
