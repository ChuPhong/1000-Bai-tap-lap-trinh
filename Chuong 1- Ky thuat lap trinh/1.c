#include <stdio.h>

// Tính S(n) = 1 + 2 + 3 + … + n.

int main() {
    int n = 10;
    int sum = 0;

    for (int i = 1; i <= 10; ++i) {
        sum += i;
    }

    printf("%d", sum);

    return 0;
}
