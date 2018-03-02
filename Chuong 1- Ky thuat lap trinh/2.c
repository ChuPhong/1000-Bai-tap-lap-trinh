#include <stdio.h>

// Tính S(n) = 1^2 + 2^2 + 3^2 + ... + n^2

int main() {
    int n = 5;
    int sum = 0;

    for (int i = 1; i <= n; ++i) {
        sum += i*i;
    }

    printf("%d", sum);

	return 0;
}
