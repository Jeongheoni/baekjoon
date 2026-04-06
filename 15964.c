#include <stdio.h>
int main(void)
{
    long long A, B;
    
    scanf("%lld %lld", &A, &B);

    printf("%lld\n", (A + B) * (A - B));

    return 0;
}