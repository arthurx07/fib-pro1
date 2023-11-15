#include <iostream>
using namespace std;

bool is_increasing(int n) {
  if (n < 10) return true; // basic case
  return is_increasing(n/10) and (n%10 >= (n/10)%10); // same as n%100, but only getting second latest number
  //          (n-1)           +       (1)      = 1
}

int main()
{
    int n;
    while (cin >> n)
        cout << (is_increasing(n) ? "true" : "false") << endl;
    return 0;
}
