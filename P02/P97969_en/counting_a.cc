// Write a program that reads a sequence of characters ended with a period and prints the number of letters ‘a’ in the sequence.

#include <iostream>
using namespace std;

int main() {
  char x;
  cin >> x;

  int sum = 0;
  while (x != '.') {
    if (x == 'a') sum += 1;
    cin >> x;
  }
  cout << sum << endl;
}
