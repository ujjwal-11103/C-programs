// no argument with return type funtion
#include <stdio.h>
int sum();
int main()
{
    int s;
    s = sum();
    printf("addition of and =%d", s);
    return 0;
}
int sum()
{
    int a, b, c;
    printf("enter two numbers\n");
    scanf("%d%d", &a, &b);
    c = a + b;
    return c;
}