#include <iostream>
using namespace std;

int factorial(int n) {
  int f = 1;
  int i = 0;
  while (i < n) { // if n = 0, doesn't enter while.
    ++i;
    f *= i;
  }
  return f;
};

int main()
{
    int x;
    while (cin >> x) {
        cout << factorial(x) << endl;
    }
    return 0;
}
