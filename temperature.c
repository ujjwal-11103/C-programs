#include <stdio.h>
int main()
{
    float a, b, c;
    printf("Enter fahrenheit reading= ");
    scanf("%f", &a);
    b = (a - 32) * 5 / 9;
    printf("In degree celsius ℃ =%f\n", b);
    return 0;
}