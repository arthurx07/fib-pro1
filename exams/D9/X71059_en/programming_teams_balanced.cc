// Input: The input has several cases. k number of members of each team to form. n1, total number of israelian programmers. n1 lines follow each with the name
//  of an israelian programmers and a positive natural indicating his programming level. These lines are sorted from bigger to smaller programming level, and in
//  lexicographic order for programmers with the same level. n2, total number of palestinian programmers. n2 lines follow with info about the palestinian
//  programmers following the same format as for israelian programmers.
//  It is guaranteed that n1+n2 is a multiple of k, and that there is no repetition of names. In particular, a name from one of the lists does not occur in the
//  other list.
//
// Output: For each case, (n1+n2)/k lines must be written. First line will contain the list of names of first team in lexicographic order. 
//  Second line will contain the list of names of second team in lexicographic order. And so on. After the output for each case, there is a blank line.
//
// Observation: fast solution is one which is correct, with linear cost ((n1+n2)log(k) is allowed in order to sort the members of each resulting team)
//
// 29/12: now it's between the US and Russia

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef vector< vector<string> > Matrix;

struct Member {
  int level;
  string name;
};

Matrix sort_members(const vector<Member>& a, const vector<Member>& b, int n1, int n2, int k) { // sort members in teams of size k by level, country, lexic order
  int r = (n1+n2)/k;
  Matrix team(r, vector<string>(k));

  int idxa = 0, idxb = 0;
  for (int i = 0; i < r; ++i) {
    int suma = 0, sumb = 0;
    for (int j = 0; j < k; ++j) {
      if (idxa == n1) team[i][j] = b[idxb].name;
      else if (idxb == n2) team[i][j] = a[idxa].name;
      else if (a[idxa].level > b[idxb].level) team[i][j] = a[idxa].name;
      else if (a[idxa].level < b[idxb].level) team[i][j] = b[idxb].name;
      else {
        if (suma > sumb) team[i][j] = b[idxb].name;
        else if (suma < sumb) team[i][j] = a[idxa].name;
        else if (a[idxa].name > b[idxb].name) team[i][j] = b[idxb].name;
        else if (a[idxa].name < b[idxb].name) team[i][j] = a[idxa].name; // may also remove if statement
      }

      if (idxa != n1 and team[i][j] == a[idxa].name) { // check whether to sum or not at the end of iteration to make code more readable, though at the cost of comparing if two items are equal
        ++idxa;
        ++suma;
      } else {
        ++idxb;
        ++sumb;
      }
    }
  }
  return team;
}


int main() {
  int k, n1, n2;
  while (cin >> k) {
    cin >> n1;
    vector<Member> ctya(n1);
    for (int i = 0; i < n1; ++i) { 
      cin >> ctya[i].name >> ctya[i].level;
    } 
    
    cin >> n2;
    vector<Member> ctyb(n2);
    for (int i = 0; i < n2; ++i) {
      cin >> ctyb[i].name >> ctyb[i].level;
    }

    // Though it's not necessary for doing successfully the exercise, at the cost of one more loop I sort the members into a matrix of groups.
    // And then cout every group, with the members sorted in lexicographical order, as demanded by exercise.
    Matrix teams = sort_members(ctya, ctyb, n1, n2, k);

    for (int i = 0; i < (n1+n2)/k; ++i) {
      sort(teams[i].begin(), teams[i].end());
      for (int j = 0; j < k; ++j) {
        cout << teams[i][j];
        if (j + 1 != k) cout << ' '; // j != k - 1
      }
      cout << endl;
    }
    cout << endl;
  }
}
