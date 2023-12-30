// Input: Four integers in a line.
// Output: If two integers of the four add up to the same sum as the other two, the output will be YES followed by a newline
//  character. Otherwise the output is NO followed by a newline character.

#include <iostream>
using namespace std;

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  if (a+b == c+d or a+c == b+d or a+d == b+c) cout << "YES" << endl;
  else cout << "NO" << endl;
}

// dif ratio: 1.0 / ccn ratio: 1.0
