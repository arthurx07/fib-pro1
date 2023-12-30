// Input: An arbitrary number of cases, where each consists of two positive natural numbers height, width, the width being an even
//  number, in one line.
// Output: For each case, the corresponding zig-zag, followed by a blank line.
// Observations: You can write the output character by character or by previously building strings, as you wish. Look at the examples.

#include <iostream>
using namespace std;

int main() {
    int h, w;
    while (cin >> h >> w) {
        int countl = 0;
        int countr = w/2;
        for (int i = 1; i < h + 1; ++i) {
            for (int j = 0; j < countl; ++j) cout << '*';
            for (int k = 0; k < w/2; ++k) cout << '#';
            for (int l = 0; l < countr; ++l) cout << '*';
            
            if (i%w == 0) {
                countl = 0;
                countr = w/2;
            }
            else if (i%w > w/2) {
                --countl;
                ++countr;
            }
            else {
                ++countl;
                --countr;
            }
            cout << endl;
        }
        cout << endl;
    }
}

// dif ratio: 0.9 / ccn ratio: 1.0
