// Input: several words, all made up of only lowercase letters. There will always be at least two different words.
// Output: second largest word in alphabetical order, ignoring repetitions.

#include <iostream>
using namespace std;

int main() {
  string word, max, max2;
  cin >> max >> max2;
  if (max2 > max) {
    string z = max;
    max = max2;
    max2 = z;
  }
  while (cin >> word) {
    if (max < word and word != max and word != max2) { max2 = max; max = word;}
    else if (max2 < word and word != max2 and word != max) max2 = word;
    else if (max == max2) max2 = word;
  }
  cout << max2 << endl;
}
