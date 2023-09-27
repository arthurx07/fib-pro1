// Write a program that reads three integer numbers and prints their maximum.
#include <iostream>

int main() {
  int a, b, c, m;
  std::cin >> a >> b >> c;
  if (a >= b) m = a;
  else m = b;
  if ( c > m ) m = c;
  std::cout << m << std::endl;
}
