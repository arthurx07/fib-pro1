// F004B. Stable products
// Input: sequence of pairs of natural numbers x and y. x ≥ 1, y ≥ 1, x * and ≤ 109 are fulfilled.
// Output: For each pair x and y, print which bases the product x * y is stable for. If there is not any base, print it.
//  It must print a line feed after the output of each case. Follow the format of the instance.
// Obs: If you do tests with random numbers and your program do not find any solution, do not worry: most products are not stable.

#include <iostream>
#include <vector>
using namespace std;

bool same_digits(int x, int y, int b); // indicates if, in base b (2<=b<=16), (x, y) and (x*y) have the same digits


void write(int n, int b) { // outputs n in base b
  int num = n/b;
  int numb = n%b;
  for (int i = b; num != 0; i = i*b) {
    numb = num%b * i;
    num /= b;
  }
  cout << numb;
}

int main() {
  int x, y;
  while (cin >> x >> y) {


    
    cout << "solutions for " << x << " and " << y << endl;
    for (int i = 2; i <= 16; ++i) {
      cout << write(x, i) << " * " << write(y, i) << " = " << write(x*y, i) << "(base " << i << ")"
    }
  }
}
