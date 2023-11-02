#include <iostream>
using namespace std;

int main() {
  int n, m;
  bool d_even = false;
  cin >> n;
  while (not d_even and cin >> m) {
    int count = 0;
    int a = m;
    while (a > 0) {
      if (a%10 == n) ++count;
      a /= 10;
    }
    if (count%2 == 0) d_even = true;
  }
  if (d_even) cout << m << endl;
  else cout << "no d-par" << endl;
}

// 22-23 Q1 C1 T2; 4 points; solved in 7 min (xd? x2)
