// Add or remove includes
#include <iostream>
#include <string>

using namespace std;

// Adapt the header of the function to your case
int simpleAlternatedSum(int n);

// Adapt the call to 'function_name' and the way it is called to your case.
int main()  {
    int n;
    while (cin >> n)
        cout << simpleAlternatedSum(n) << endl;
}
