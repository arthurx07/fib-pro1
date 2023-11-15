#include <iostream>
using namespace std;

int factorial(int n) {
  if (n == 0) return 1; // until arriving to 1
  else return n*factorial(n - 1); // start by n, and go multiplying by n - 1, n -2, n - 3...
};

int main()
{
    int x;
    while (cin >> x) {
        cout << factorial(x) << endl;
    }
    return 0;
}
