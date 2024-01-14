#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int i = 0;
  while (i < 10) {
    i = i + 1;
    cout << n << '*' << i << " = " << n*i << endl;
  }
}
