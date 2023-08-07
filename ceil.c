#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    int sqr=4,result;
    result=sqrt(sqr);
    printf("The square root of %d is =%d",sqr,result);

    float a = -1.1, result;
    result = fabs(a);
    printf("The absolute value of  |%.2f| is =%.2f", a, result);

    float a = 1.1;
    int result = ceil(a);
    printf("The nearest greatest integer value of  %.2f is =%d", a, result);

    float a = 2.1;
    int result = floor(a);
    printf("The nearest smallest integer value of  %.2f is =%d", a, result);

    int base=2, a=4;
    int result=pow(base,a);
    printf("%d^%d=%d", base, a, result);
    getch();
}