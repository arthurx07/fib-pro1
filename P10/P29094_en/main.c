#include <stdio.h>

int position_maximum(double v[], int m);

int main() {
	int m, n;
	while (scanf("%d %d", &m, &n) > 0) {
    double v[n];
    for (int i = 0; i < n; ++i) scanf("%lf", &v[i]);
    printf("%d\n", position_maximum(v, m));
	}
	return 0;
}
