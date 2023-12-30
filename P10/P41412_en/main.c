#include <stdio.h>

void insertion_sort(int n, double v[n]);

int main()
{
    int n, i;
    while (scanf("%d", &n) > 0) {
        double v[n];
        for (i = 0; i < n; ++i)
            scanf("%lf", &v[i]);
        insertion_sort(n, v);
        for (i = 0; i < n; ++i)
            printf(" %.4lf", v[i]);
        printf("\n");
    }
    return 0;
}
