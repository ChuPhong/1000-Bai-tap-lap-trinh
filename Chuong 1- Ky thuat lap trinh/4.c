#include <stdio.h>

// Tính S(n) = 1/2 + 1/4 + ... + 1/2n

int main() {
    int n = 10;

    float sum = 0.0;

    for (int i = 1; i <= n; ++i)
    {
        sum += 1.0/(2*i);
    }

    printf("%f", sum);

    return 0;
}
