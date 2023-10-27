#include <stdio.h>

int is_palindromic(int x);

int main() {
	int n;
	while (scanf("%d", &n) > 0) {
    printf("%s\n", is_palindromic(n) ? "true" : "false");
	}
	return 0;
}
