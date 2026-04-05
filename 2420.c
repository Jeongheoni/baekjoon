#include <stdio.h>
int main(void)
{
    long long N, M;
    scanf("%lld %lld", &N, &M);
    if (N >= M) {
        printf("%lld\n", N - M);
    } else {
        printf("%lld\n", M - N);
    }
    return 0;
}