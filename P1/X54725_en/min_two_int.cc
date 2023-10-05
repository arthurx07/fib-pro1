// Write a program that reads two integer numbers and prints their minimum.
#include <iostream>
using namespace std;

int main() {
  int a, b, m;
  cin >> a >> b;
  if (a > b) m = b;
  else m = a;
  cout << m << endl;
}
