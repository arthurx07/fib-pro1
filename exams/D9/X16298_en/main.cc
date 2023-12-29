// Add or remove includes
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int numberHappyOrSadSubsequences(const string &s);

int main()  {
    string input;
    string s = "";
    int n1 = 0;
    int n2 = 0;
    int n3 = 0;
    string triple = "";
    while (cin >> input) {
        if (input[0] == ':' or input[0] == ')' or input[0] == '(') {
            cout << numberHappyOrSadSubsequences(input) << endl;
            continue;
        }
        int nn1 = atoi(input.c_str());
        int nn2, nn3;
        string ntriple;
        cin >> nn2 >> nn3 >> ntriple;
        if (n1 + n2 + n3 != nn1 + nn2 + nn3 or triple != ntriple) {
            n1 = nn1;
            n2 = nn2;
            n3 = nn3;
            triple = ntriple;
            s = string(n1, triple[0]) + string(n2, triple[1])+ string(n3, triple[2]);
            cout << numberHappyOrSadSubsequences(s) << endl;
            continue;
        }
        char c1 = triple[0];
        char c2 = triple[1];
        char c3 = triple[2];
        int i1 = n1;
        int i2 = n1+n2;
        int ni1 = nn1;
        int ni2 = nn1+nn2;
        while (ni1 < i1) {
            i1--;
            s[i1] = c2;
        }
        while (i2 < ni2) {
            s[i2] = c2;
            i2++;
        }
        while (i1 < ni1) {
            s[i1] = c1;
            i1++;
        }
        while (ni2 < i2) {
            i2--;
            s[i2] = c3;
        }
        n1 = nn1;
        n2 = nn2;
        n3 = nn3;
        triple = ntriple;
        cout << numberHappyOrSadSubsequences(s) << endl;
    }
}
