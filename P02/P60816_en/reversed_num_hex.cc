// Write a program that reads a number and prints its hexadecimal representation reversed.
// Follow the convention to use the letters from ‘A’ to ‘F’ to represent the values from 10 to 15.
// Input: natural number
// Output: Print the number's hexadecimal representation reversed, with as many zeros at its left as required.

#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  if ( n == 0 ) cout << n; // cas especial que necessita tractament propi
  else { 
    while ( n != 0 ) {
      int r = n % 16;
      if ( r < 10 ) cout << r;
      else cout << char( r - 10 + 'A' );
      n = n / 16;
    }
  }
  cout << endl;
}
