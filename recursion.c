#include <stdio.h>
int factorial(int a);
int main()
{
    int x;
    printf("Enter the no to get its factorial\n");
    scanf("%d", &x);
    printf("The factorial of %d=%d\n", x, factorial(x));
    return 0;
}
int factorial(int a) //define
{
    printf("Calling factorial=%d\n", a);
    if (a == 1 || a == 0)
    {
        return 1;
    }
    else
    {
        return a * factorial(a - 1);
    }
}