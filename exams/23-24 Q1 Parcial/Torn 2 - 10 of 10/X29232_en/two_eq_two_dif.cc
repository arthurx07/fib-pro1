// Write a program that reads four integers and determines if two of them are equal and the remaining ones are different from any other.
// Input: Four integers in one line.
// Output: If two integers in the input are equal to each other and the other two are different from any other one then print YES.
//  Otherwise, print NO.
#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    bool found = false;
    cin >> a >> b >> c >> d;
    if (a == b and a != c and a != d and b != c and b != d and c != d) found = true;
    else if (a == c and a != b and a != d and b != c and b != d and c != d) found = true;
    else if (a == d and a != b and a != c and b != c and b != d and c != d) found = true;
    else if (b == c and a != b and a != c and a != d and b != d and c != d) found = true;
    else if (b == d and a != b and a != c and a != d and b != c and c != d) found = true;
    else if (c == d and a != b and a != c and a != d and b != c and b != d) found = true;

    if (found) cout << "YES" << endl;
    else cout << "NO" << endl;
}

// dif ratio: 3.3 / ccn ratio: 1.6
