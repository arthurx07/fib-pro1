#include <iostream>
using namespace std;

int main() {
  char let;
  cin >> let;
  bool found = false;
  while (let != '.' and not found) {
    found = let == 'a';
    cin >> let;
  }
  if (found) cout << "yes" << endl;
  else cout << "no" << endl;
}
