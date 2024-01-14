// Write a program that reads a number and prints it reversed.
// Input: natural number
// Output: Print the number reversed, with as many zeros at its left as it has at its right.

#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  if ( n == 0 ) cout << n; // cas especial que necessita tractament propi
  else { 
    while ( n != 0 ) {
      cout << n % 10;
      n = n / 10;
    }
  }
  cout << endl;
}
