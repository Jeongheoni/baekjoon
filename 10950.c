#include <stdio.h>

int main(void)
{
    int A, B, N;
    
    scanf("%d", &N);
    
    for (int i = 1; i <= N; i++) {
        scanf("%d", &A);
        scanf("%d", &B);
        
        printf("%d\n", A + B);
    }
    
    return 0;
}