#include <stdio.h>
int main()
{
    int a, b;
    printf("hello world \n");
    printf("enter the values of a and b=");
    scanf("%d%d", &a, &b);
    printf("%d%d\n", a, b);
    printf("you have entered the value of a =%d\n", a);
    printf("you have entered the value of b =%d\n", b);
    printf("addition of a and b is =%d\n", a + b);
    printf("subtraction of a and b is =%d", a - b);
    
    return 0;
}