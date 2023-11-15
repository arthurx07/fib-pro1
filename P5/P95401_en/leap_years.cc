#include <iostream>
using namespace std;

bool is_leap_year(int year) {
  return ((year%4 == 0 and year%100 != 0) or ((year/100)%4 == 0 and year%100 == 0));
};

int main()
{
    int a;
    while (cin >> a)
        cout << (is_leap_year(a) ? "true" : "false") << endl;

    return 0;
}
