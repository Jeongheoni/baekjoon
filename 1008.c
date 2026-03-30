#include <stdio.h>
int main(void)
{
    double a, b;   //float는 값이 부정확해서 소수점 10자리까지 값까지 출력할땐 적합 X
    scanf("%lf %lf", &a, &b);
    printf("%.10f\n", a / b);  //%.10f는 소수점 10자리까지 출력하겠다는 의미
    return 0;
}