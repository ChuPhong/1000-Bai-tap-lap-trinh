#include <stdio.h>

// Tính S(n) = 1 + 1/2 + 1/3 + ... + 1/n

int main() {
    int n = 5;
    float sum;

    for (int i = 1; i <= n; ++i)
    {
        sum += 1.0/i;
    }

    printf("%f", sum);

    return 0;
}
