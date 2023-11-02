#include <iostream>
using namespace std;

int main() {
  // A = -1; Z = -26
  // Z = 1; a = 26
  char let;
  int count = 0;
  while (cin >> let and let != '.') {
    if (let > 'A' and let < 'z') {
      if (let < 'a') { // uppercase
        for (char i = 'A'; i <= let; ++i) { --count; cout << count << ' ' << i << endl; }
      }
      else { // lowercase
        for (char j = 'a'; j <= let; ++j) { ++count; cout << count << ' ' << j << endl; }
      }
    }
  }
  cout << count << endl;
}
