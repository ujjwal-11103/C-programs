#include <stdio.h>
int fib(int c, int n);
int main()
{
    int c, n;
    printf("enter the end value number\n");
    scanf("%d", &n);
    fib(c,n);
    return 0;
}
int fib(int c,int n)
{
    int x = 0, y = 1;
    for (int i = 1; i < n; i++)
    {
        c = x + y;
        x = y;
        y = c;
        printf("%d ", c);
    }
}
