// argument with return type
#include <stdio.h>
int sum(int m, int n);
int main()
{
    int a, b, s;
    s = sum(a, b);
    printf("addition of and =%d", s);
    return 0;
}
int sum(int m, int n)
{
    int a, b, c;
    printf("enter two numbers\n");
    scanf("%d%d", &a, &b);
    c = a + b;
    return c;
}