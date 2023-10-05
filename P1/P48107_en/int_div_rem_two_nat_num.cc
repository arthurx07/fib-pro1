/* Input: integer numbers a and b, with b > 0.  0 ≤ r < b and d · b + r = a.
    Output: Integer division and remainder of a divided by b, separated by a space
    Observation: Although the conditions for the input of this exercise prevent divisions
    by zero, check what happens to your program in that case. 
      me: floating point exception*/

#include <iostream>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  cout << a/b << " " << a%b << endl;
}
