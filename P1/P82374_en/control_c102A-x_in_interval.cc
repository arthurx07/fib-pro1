/* Write a program that, given five integers x,a,b,c,d, determines if x∈[a,b]∪[c,d];
    and texts "no" otherwise */

#include <iostream>

int main() {
  int x, a, b, c, d;
  std::cin >> x >> a >> b >> c >> d;
  if ((x >= a and x <= b) or (x >= c and x <= d)) std::cout << "yes" << std::endl;
  else std::cout << "no" << std::endl;
}
