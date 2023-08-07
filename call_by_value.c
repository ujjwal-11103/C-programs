#include <stdio.h>
int sum(int a, int b);
int main()
{
    int a = 5, b = 5;//you can use different variable names here
    printf("\n the value of a and b=%d and %d", a, b);
    printf("\n addition of a and b=%d", sum(a, b));
    printf("\n the value of a and b after function call =%d and %d", a, b);

    return 0;
}
int sum(int a, int b)
{
    int c;
    a = 2;
    b = 2;
    c = a + b;
    return c;
}