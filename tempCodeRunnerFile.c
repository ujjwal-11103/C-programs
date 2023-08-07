#include <stdio.h>
int ok(int *a, int *b);
int main()
{
    int a, b;
    ok(&a, &b);
    printf("sum=%d\n", a);
    printf("average=%d\n", b);

    return 0;
}
int ok(int *a, int *b)
{
    int i = 5, j = 5, k, l;
    k = i + j;
    l = (i + j) / 2;
    *a = k;
    *b = l;
    return 0;
}