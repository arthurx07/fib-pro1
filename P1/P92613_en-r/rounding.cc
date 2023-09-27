/* Write a program that reads a real number x≥0 and prints ⌊ x ⌋ (the floor of x),
⌈ x ⌉ (the ceiling of x), and the rounding of x. */
#include <iostream>
using namespace std;

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

int main() {
  double n, floor, round, ceiling;
  cin >> n;
  floor = int(n);
  if (floor == n) { ceiling = n; round =n; }
  else {
    ceiling = int(n) + 1;
    if (ceiling - n > n - floor) round = floor;
    else round = ceiling;
  }
  cout << int(floor) << ' ' << int(ceiling) << ' ' << int(round) << endl;
}

// foor = int(n)
// if floor == n -> ceiling = n, round = n
// else {
//    ceiling = floor + 1
//    if ( ceiling - n > n - floor ) round = floor
//    else round = ceiling
// }
