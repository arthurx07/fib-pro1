// Input: natural number x
// Output: reduction of its digits, sum them until there's left just one digit.
// Observation: Although there is a mathematic trick to solve this problem faster
//  than by adding up its digits, do not use it here.

#include <iostream>
using namespace std;

int sum_of_digits(int x) {
  if (x < 10) return x; // basic case, sum = x
  else return sum_of_digits(x/10) + x%10; // sum last digit, repeat without last digit
    //          (n - 1)        + (1) = n
}

int reduction_of_digits(int n) {
  if (n < 10) return n; // basic case, n is one digit
  else return reduction_of_digits(sum_of_digits(n)); // repeat process with the sum of the current digits
    //            (n - 1)     +     (1)         = n
}

int main()
{
    int n;
    while (cin >> n) {
        cout << reduction_of_digits(n) << endl;
    }
    return 0;
}

// ratio: nloc (0.7), toks (1.0), dif (1.0), ccn (1.0) -> clavao!
