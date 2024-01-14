// Write a program that reads a sequence of natural numbers and prints the position of the first even number.

#include <iostream>
using namespace std;

int main() {
  int n;
  int pos = 0;
  bool found = false;
  while (cin >> n and not found) { // search algorithm
    found = n%2 == 0;
    pos += 1;
  }
  cout << pos << endl;
}
