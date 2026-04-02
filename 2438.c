#include <stdio.h>

int main(void)
{
    int N;
    scanf("%d", &N);
    
    for (int i = 1; i <= N; i++) {
        for (int n = 1; n <= i; n++) { //관용적으로 안쪽 반복문은 n이 아니라 j를 쓴다고 함.
            printf("*");
        }
        printf("\n");
    }
    return 0;
}