// Write a program that reads a sequence of characters and prints the number of letters ‘a’ in the sequence before the first period.
#include <iostream>
using namespace std;

int main() {
  char let;
  int sum = 0;
  while (cin >> let and let != '.') { // search algorithm
    if (let == 'a') sum += 1;
  }
  cout << sum << endl;
}
