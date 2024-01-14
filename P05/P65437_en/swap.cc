#include <iostream>
using namespace std;

void swap2(int& a, int& b) {
  a -= b;
  b += a;
  a = b - a;
  // int c = a;
  // a = b;
  // b = c;
};

int main()
{
    int x, y;
    while (cin >> x >> y) {
        swap2(x, y);
        cout << x << " " << y << endl;
    }

    return 0;
}
