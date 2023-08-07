//call by reference method
#include <stdio.h>
int ok(int i, int *a);
int main()
{
    int b = 5;

    printf("The value of the variable b=%d\n", b);
    printf("The address of the variable b=%u\n", &b);

    ok(b, &b);
    printf("The value of the variable b=%d\n", b);
    printf("The address of the variable b=%u\n", &b);

    return 0;
}
int ok(int i, int *a)
{
    *a = (i * 10);
    printf("The address of the variable a=%u\n", a);
    return 0;
}