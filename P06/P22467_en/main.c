#include <stdio.h>

int is_perfect_prime(int x);

int main() {
	int n;
	while (scanf("%d", &n) > 0) {
    printf("%s\n", is_perfect_prime(n) ? "true" : "false");
	}
	return 0;
}
