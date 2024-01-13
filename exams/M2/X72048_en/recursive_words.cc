// Input: has several cases. Each one consists of a single digit d in one line.
// Output: For each case from the input, the output has a string in a new line. Deduce the expected string for each d from the examples.
// Obs: The solution for this exercise must be recursive. You can either make a recursive function which directly prints the string on the output,
//  or a function that returns the string and it is the main program who prints it. You can use a loop in the body of the function, if you wish, but the general solution must be recursive. 

#include <iostream>
using namespace std;

void words(int n) {
  // if (n == 0) cout << char(n + '0');
  // else {
  for (int i = n; i > 0; --i) {
    cout << char(n + '0');
    words(n-1);
  }
  cout << char(n + '0');
}

int main() {
  int n;
  while (cin >> n) {
    words(n);
    cout << endl;
  }
}

// tried it again, after the mock exam, solved it in <5 min [:O]
    // in the exam was +1hour, with 0 results :(
