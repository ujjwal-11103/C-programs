#include <stdio.h>
int point(int a);
int main()
{
    int a = 5;
    printf("The address of the variable 'a' before function call=%u\n", &a);
    point(a);
    printf("The address of the variable 'a' after function call in main=%u\n", &a);

    return 0;
}
int point(int a)
{
    printf("The address of the variable 'a' after function call=%u\n", &a);
    return 0;
}