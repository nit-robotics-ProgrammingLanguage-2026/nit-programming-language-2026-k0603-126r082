#include <stdio.h>

int main(void)
{
    int n;
    if (scanf("%d", &n) != 1) {
        return 0;
    }
    if (n < 0) {
        printf("NG");
        return 0;
    }

    long long total = 0;
    for (int index = 0; index < n; index++) {
        total += (long long)index + 1;
    }
    printf("%lld", total);
    return 0;
}