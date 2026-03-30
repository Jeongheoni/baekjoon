#include <stdio.h>
int main(void)
{
    int a, b, c;
    scanf("%d %d", &a, &b);
    
    printf("%d\n", a + b);
    printf("%d\n", a - b);
    printf("%d\n", a * b);
    
    c = a / b;
    printf("%d\n", c);
    printf("%d\n", a - c * b);
    
    return 0;
}