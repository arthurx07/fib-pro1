// Input: Sequence of words
// Output: print words of the original sequence, in reverse order, and one per line
// Obs: for the sake of practice use recursion (not arrays)

#include <iostream>
using namespace std;

void reverse() {
  string s;
  if (cin >> s) { 
    reverse();
    cout << s << endl;
  }
}

int main() {
  reverse();
}

// Tot el que s'executa abans de cridar la següent instància va abans de la 
// crida
// Tot el que s'executa després de la crida, s'escriu després.
