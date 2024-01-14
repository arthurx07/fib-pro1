// Average length and most frequent letter
// Input: The input is formed by a natural n > 0 followed by n non-empty words. Each word is formed exclusively by lowercase letters. 
// Output: Print the average length of the words in the input sequence with precision 2. Additionally print, for every word with length equal or longer 
//  to the average one, the lowercase letter with most occurrences inside the word (the smallest in lexicographic order when ties)

#include <iostream>
#include <vector>
using namespace std;

const int LENGTH_ALPHABET = 'z' - 'a' + 1;

char most_frequent_letter(const string& s) {
  vector<int> v(LENGTH_ALPHABET);
  for (int i = 0; i < s.length(); ++i) ++v[s[i] - 'a'];

  int max = 0;
  int imax = 0;
  for (int j = 0; j < LENGTH_ALPHABET; ++j) {
    if (v[j] > max or (v[j] == max and j < imax)) {
      max = v[j];
      imax = j;
    }
  }
  return imax + 'a';
}

int main() {
  cout.setf(ios::fixed);
  cout.precision(2);

  int n;
  cin >> n;

  double av = 0;
  vector<string> v(n);
  for (int i = 0; i < n; ++i) {
    cin >> v[i];
    av += v[i].length();
  }

  av /= n;
  cout << av << endl;

  for (int i = 0; i < n; ++i) {
    if (v[i].length() >= av) cout << v[i] << ": " << most_frequent_letter(v[i]) << endl;
  }
}

// ccn ratio: 1.3 (ccn 4 vs 3)
