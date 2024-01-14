/* Write a program that reads a real number x≥0 and prints ⌊ x ⌋ (the floor of x),
⌈ x ⌉ (the ceiling of x), and the rounding of x. */

#include <iostream>
using namespace std;

int main() {
  double n;
  cin >> n;

  int floor = int(n); // 0.5 --> floor to 0
  int round = int(n + 0.5); // 0.5 + 0.5 --> rounds to 1; 0.3 + 0.5 --> rounds to 0
  int ceiling;
  if (floor == n) ceiling = n; // if n is int, ceiling = n
  else ceiling = floor + 1;

  cout << floor << ' ' << ceiling << ' ' << round << endl;
}

// prev1: 
// int main() { // caution: float != double
//   double n, f, r, c; // n: number, f: floor, c: ceiling, r: closest int
//   std::cin >> n;
//   f = int(n); // int(n.3) always returns n, not n+1
//   if (f == n) { c = n; r = n; } // check if n is already int
//   else {
//     c = int(n) + 1;
//     if ( c - n > n - f ) r = f; // n = 2.4; if (3 - 2.4) > (2.4 - 2): closest int is 2; else closest int is 3
//     else r = c;
//   }
//   std::cout << int(f) << ' ' << int(c) << ' ' << int(r) << std::endl;
// }

// prev2:
// if (floor == n) { ceiling = n; round =n; } // for n is int.
// else {
//   ceiling = int(n) + 1;
//   if (ceiling - n > n - floor) round = floor;
//   else round = ceiling;
// }
