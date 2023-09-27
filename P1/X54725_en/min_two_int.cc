// Write a program that reads two integer numbers and prints their minimum.
#include <iostream>

int main() {
  int a, b, m;
  std::cin >> a >> b;
  if (a > b) m = b;
  else m = a;
  std::cout << m << std::endl;
}
