#include <iostream>
using namespace std;

bool is_perfect(int x) {
  int sqrt = 0;
  while (sqrt*sqrt < x) ++sqrt;

  int sum = 0;
  for (int i = 1; i*i <= x; ++i) sum += i*(x%i == 0);
  for (int j = sqrt - 1; j > 1; --j) sum += x/j*(x%j == 0);

  return (sum == x) and (x != 0) and (x != 1);
};

int main()
{
    int x;
    while (cin >> x)
        cout << (is_perfect(x) ? "true" : "false") << endl;
    return 0;
}
