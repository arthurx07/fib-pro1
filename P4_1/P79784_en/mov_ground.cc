// Input: sequence of characters ‘n’, ‘s’, ‘e’, or ‘w’.
// Ouput: final position of an object initially located at (0, 0).

#include <iostream>
using namespace std;

int main() {
  char n;
  int lat = 0; // latitude
  int lon = 0; // longitude
  while (cin >> n) { // treat-all algorithm
    if (n == 's') lat += 1;
    else if (n == 'n') lat -= 1;
    else if (n == 'e') lon += 1;
    else lon -= 1; // if (n == 'w')
  }
  cout << '(' << lon << ", " << lat << ')' << endl;
}
