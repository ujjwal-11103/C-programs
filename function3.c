// argument with no return type function
#include <stdio.h>
void sum(int m, int n);
int main()
{
    int a, b;
    sum(a, b);
    return 0;
}
void sum(int m, int n)
{
    int a, b, c;
    printf("enter two numbers\n");
    scanf("%d%d", &a, &b);
    c = a + b;
    printf("addition of %d and %d =%d", a, b, c);
}
