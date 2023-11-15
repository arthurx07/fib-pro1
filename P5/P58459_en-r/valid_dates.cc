#include <iostream>
using namespace std;

bool is_valid_date(int d, int m, int a) {
  bool correct = true;
  bool leap = ((a%4 == 0 and a%100 != 0) or ((a/100)%4 == 0 and a%100 == 0));
  if (m == 2 and ((leap and d > 29) or (not leap and d > 28))) correct = false;
  else if ((m == 4 or m == 6 or m == 9 or m == 11) and d > 30) correct = false;
  else if (d > 31 or m > 12 or d < 0 or m < 0 or d == 0 or m == 0) correct = false;
  return correct;
};

int main()
{
    int d, m, a;
    while (cin >> d >> m >> a)
        cout << (is_valid_date(d, m, a) ? "true" : "false") << endl;
    return 0;
}
