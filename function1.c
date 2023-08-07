// no argument and no return value type function
#include <stdio.h>
void sum(); //function declare
int main()
{
    sum(); //function call
    return 0;
}
void sum() //function define
{
    int a, b, c;
    printf("enter two numbers\n");
    scanf("%d%d", &a, &b);
    c = a + b;
    printf("addition of %d and %d =%d", a, b, c);
}
