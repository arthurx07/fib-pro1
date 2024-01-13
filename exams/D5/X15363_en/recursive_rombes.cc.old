#include <iostream>
using namespace std;

void draw(int c, int g) {
  int f = (2*c) - 1;
  for (int i = 0; i < g - c; ++i) cout << ' ';
  for (int j = 0; j < f; ++j) cout << '*';
  cout << endl;
}

// void lines(int n) {
//   if (n == 1) a = a + 1;
//   else a = lines(n-1) + n;
//   cout << a << endl;
// }

// void rombes(int c, int g) {
//   if (c == g) draw(c, g);
//   else if (c > 0) {
//     draw(c, g);
//     rombes(c+1, g);
//     draw(c, g);
//   }
// }

void rombes(int c, int g, int& k) {
  if (c == 1) {
    draw(c, g);
    ++k;
  }
  else {
    if (k > g - 1) draw(c, g);
    ++k;
    rombes(c-1, g, k);
    draw(c, g);
    rombes(c-1, g, k);
    draw(c, g);
  }
}

int main() {
  int n;
  while (cin >> n) {
    int k = 0; // lines
    rombes(n, n, k);
  }
}
