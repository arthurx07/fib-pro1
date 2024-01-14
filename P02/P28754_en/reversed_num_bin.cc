// Write a program that reads a number and prints its binary representation reversed.
// Input: natural number
// Output: Print the binary representation of the number reversed, with as many zeros at its left as required.

#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  if ( n == 0 ) cout << n; // cas especial que necessita tractament propi
  else { 
    while ( n != 0 ) {
      cout << n % 2;
      n = n / 2;
    }
  }
  cout << endl;
}
