#include <iostream>

int main() {
  int n;
  std::cin >> n;
  if (n > 30) { 
    std::cout << "it's hot" << std::endl;
    if (n >= 100) std::cout << "water would boil" << std::endl;
  }
  else if (n < 10) {
    std::cout << "it's cold" << std::endl;
    if (n <= 0) std::cout << "water would freeze" << std::endl;
  }
  else std::cout << "it's ok" << std::endl;
}
