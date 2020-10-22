#include <stdio.h>

long C(long n, long k)
{
    if (k == 0 || n == k)
        return 1;
    return C(n - 1, k - 1) + C(n - 1, k);
}

int main()
{
    long n, k;
    scanf_s("%ld%ld", &n, &k);
    printf("%ld ", C(n, k));
    return 0;
}