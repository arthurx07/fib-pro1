#include <iostream>
using namespace std;

void draw(int n, int s) {
  int c = (2*n) - 1;
  for (int i = 0; i < s; ++i) cout << ' ';
  for (int j = 0; j < c; ++j) cout << '*';
  cout << endl;
}

void rombes(int n, int s) {
  if (n == 1) draw(n, s - n);
  else {
    rombes(n-1, s); // draw upper rhombus

    int aux = 2; // we start at drawing 2
    for (int i = 0; i < 2*n - 3; ++i) { // 2*n - 3, is the number of lines between 2..n..2
      draw(aux, s - aux);
      if (n-i <= 2) --aux; // start decreasing after lower-half (always starts at n-i == 2)
      else ++aux;
    }

    rombes(n-1, s); // draw lower rhombus
  }
}

int main() {
  int n;
  while (cin >> n) {
    rombes(n, n);
    cout << endl;
  }
}
