#include <stdio.h>
void average();
int main()
{
    average();
    return 0;
}
void average()
{
    float a = 1, b = 3, c = 3, d;
    d = (a + b + c) / 3;
    printf("average=%f\n", d);
}