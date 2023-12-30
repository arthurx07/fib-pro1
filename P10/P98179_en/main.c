#include <stdio.h>

void insert(int n, double v[n]);

int main()
{
    int i, n;
    while (scanf("%d", &n) > 0) {
        double v[n];
        for (i = 0; i < n; ++i)
            scanf("%lf", &v[i]);
        insert(n, v);
        for (i = 0; i < n; ++i)
            printf(" %.4lf", v[i]);
        printf("\n");
    }
    return 0;
}
