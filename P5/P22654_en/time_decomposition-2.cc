#include <iostream>
using namespace std;

void decompose(int n, int& h, int& m, int& s) {
  s = n%60;
  n /= 60;
  m = n%60;
  h = n/60;
};

int main()
{
    int n, h, m, s;
    while (cin >> n) {
        decompose(n, h, m, s);
        cout << h << " " << m << " " << s << endl;
    }

    return 0;
}
