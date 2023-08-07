#include <stdio.h>
int fib(int num);
int main()
{
    int a, i;
    printf("Enter the end value number to find its fibonacci number=\n");
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        printf("%d ", fib(i));
    }

    return 0;
}
int fib(int num)
{
    int c;
    if (num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        c = (fib(num - 1) + fib(num - 2));
        return c;
    }
}