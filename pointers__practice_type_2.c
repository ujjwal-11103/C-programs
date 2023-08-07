//call by value method
#include <stdio.h>
int ok(int i);
int main()
{
    int b = 5;

    printf("The value of the variable b=%d\n", b);
    printf("The address of the variable b=%u\n", &b);

    ok(b);
    printf("The value of the variable b=%d\n", b);
    printf("The address of the variable b=%u\n", &b);

    return 0;
}
int ok(int i)
{
    int k;
    k = (i * 10);
    printf("The value of the variable b=%d\n", k);
    printf("The address of the variable i=%u\n", &i);
    printf("The address of the variable k=%u\n", &k);
    return 0;
}