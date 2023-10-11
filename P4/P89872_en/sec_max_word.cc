// Input: several words, all made up of only lowercase letters. There will always be at least two different words.
// Output: second largest word in alphabetical order, ignoring repetitions.

#include <iostream>
using namespace std;

int main() {
  string word, max, max2;
  cin >> max;
  while (cin >> word) {
    if (word > max) {
      max2 = max;
      max = word;
    }
    else if (word > max2 and word != max) max2 = word;
      // when max2 is not declared, everything is > than max2
    else if (max == max2) max2 = word;
  }
  cout << max2 << endl;
}
