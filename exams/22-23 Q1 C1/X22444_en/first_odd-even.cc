#include <iostream>
using namespace std;

int main() {
  int n, m;
  bool odd_even = false;
  while (not odd_even and cin >> n) { // search sequence
    int count = 0;
    m = n;
    while (m > 0) { // treat-all elements
      if ((m%10)%2 != 0) ++count;
      m /= 10;
    }
    if (count%2 == 0) {
      odd_even = true;
    }
  }
  if (odd_even) cout << n << endl;
  else cout << "no impar-par" << endl;
}

// 22-23 Q1 C1 T1; 4 points exam score; solved in <10 min (xd?)
