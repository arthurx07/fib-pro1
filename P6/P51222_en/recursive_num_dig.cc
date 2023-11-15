#include <iostream>
using namespace std;


int number_of_digits(int n) {
  if (n <= 9) return 1; // basic case
  else return 1 + number_of_digits(n/10);
  //      (1)   +        (n - 1)        = n
}


int main () {
  int n;
  while (cin >> n) cout << number_of_digits(n) << endl;
  return 0;
}
