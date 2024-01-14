// Input: non-empty sequence of cases. Each case is described by an integer n≥ 3 followed by the n integer values of the corresponding vector. 
// Output: Print, for each case, the positions having a ramp and the number of pairs of positions (i,j) with i<j having a ramp and 
//  potentially conflictive.

#include <iostream>
#include <vector>
using namespace std;

vector<bool> ramps_pos(const vector <int>& V) {
  vector <bool> B(V.size());
  for (int i = 0; i < V.size(); ++i) {
    cout << "i: " << i;
    if (V[i] > V[i+1] and V[i+1] > V[i+2]) B[i] = true;
    else if (V[i] < V[i+1] and V[i+1] < V[i+2]) B[i] = true;
  }
  return B;
}

int pot_conflictive(const vector <bool>& B) {
  int sum = 0;
  for (int i = 0; i < B.size(); ++i) {
    cout << "i: " << i;
    if (B[i] == true and (B[i+1] == true or B[i+2] == true)) ++sum;
  }
  return sum;
}

int main() {
  int n;
  while (cin >> n) {
    vector<int> ramps(n);
    for (int i = 0; i < n; ++i) {
      cin >> ramps[i];
    }

    vector<bool> rpos = ramps_pos(ramps);
    cout << "positions with a ramp:";
    for (int i = 0; i < n; ++i) {
      cout << "i: " << i;
      if (rpos[i] == true) cout << ' ' << i;
    }
    cout << endl;
    cout << "potentially conflictive: " << pot_conflictive(rpos) << endl;
    cout << "---" << endl;
  }
}
