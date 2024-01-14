#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Teacher {
  string name;
  int carrots, sweets;
};

bool comp(const Teacher& a, const Teacher& b) {
  if (a.sweets == b.sweets) {
    if (a.carrots == b.carrots) {
      if (a.name.size() == b.name.size()) return a.name < b.name;
      return a.name.size() < b.name.size();
    }
    return a.carrots > b.carrots;
  }
  return a.sweets > b.sweets;
}

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    int m;
    cin >> m;
    vector<Teacher> t(m);
    
    for (int j = 0; j < m; ++j) cin >> t[j].name >> t[j].sweets >> t[j].carrots;

    sort(t.begin(), t.end(), comp);

    for (int k = 0; k < m; ++k) {
      cout << t[k].name << endl;
    }
    cout << endl;
  }
}
