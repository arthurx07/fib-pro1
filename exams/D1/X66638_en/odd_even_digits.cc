#include <iostream>
using namespace std;

int main() {
  int num;

  while (cin >> num) {
    int even = 0;
    int odd = 0;
    for (int i = num; i > 0; i = i/10) {
      int digit = i%10;
      if (digit%2 == 0 and digit != 0) even = even*10 + digit; // check digit parity
      else if (digit != 0) odd = odd*10 + digit;
    }

    for (int j = odd; j > 0; j = j/10) even *= 10;
    int z = even + odd;
    int x = 0;
    while ( z != 0 ) { // reverse z and assign to x
      x = x*10 + z%10;
      z /= 10;
    }

    int y = x*2;
    cout << x << ' ' << y << endl;
  }
}
