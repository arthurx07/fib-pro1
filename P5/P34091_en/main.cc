#include <iostream>
using namespace std;

int main()
{
    int x;
    while (cin >> x)
        cout << (is_perfect(x) ? "true" : "false") << endl;
    return 0;
}
