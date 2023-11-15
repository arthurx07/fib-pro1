#include <stdio.h>

int reduction_of_digits(int x);

int main()
{
    int n;
    while (scanf("%d", &n) > 0) {
        printf("%d\n", reduction_of_digits(n));
    }
    return 0;
}
