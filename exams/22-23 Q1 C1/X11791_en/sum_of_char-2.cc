#include <iostream>
using namespace std;

int main() {
  // A = -1; Z = -26
  // Z = 1; a = 26
  char let;
  int count = 0;
  while (cin >> let and let != '.') {
      if (let >= 'A' and let <= 'Z') { // uppercase
        for (char i = 'A'; i <= let; ++i) --count;
	}
      else if (let >= 'a' and let <= 'z') { // lowercase
        for (char j = 'z'; j >= let; --j) ++count;
      }
  }
  cout << count << endl;
}
