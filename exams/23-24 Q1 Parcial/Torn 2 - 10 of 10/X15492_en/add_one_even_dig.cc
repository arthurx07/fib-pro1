// Input: many cases. Each case is a natural number in one line.
// Output: a separate line with the number with its even digits incremented by 1.
// Observation: Read numbers from the input into variables of type int, for example with cin >> a, and solve the problem operating with
//  integers using +, -, *, /, and %.
#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n) { // treat-all sequence
        int m = 0;
        for (int i = 1; n != 0; i *= 10) {
            int x = n%10;
            if (x%2 == 0) ++x;
            m = x*i + m;
            n /= 10;
        }
        cout << m << endl;
    }
}

// dif ratio: 0.8 / ccn ratio: 0.8
