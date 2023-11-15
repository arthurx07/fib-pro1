// Input: sequence of words. At least one is “end”.
// Output: Print all the words of the original sequence until the first 
// appearance of “end”, in reverse order, and one per line.
// Observation: For the sake of practice, use recursion (not arrays).

#include <iostream>
using namespace std;

void reverse() {
  string s;
  if (cin >> s and s != "end") {
    reverse();
    cout << s << endl;
  }
}

int main() {
  reverse();
}
