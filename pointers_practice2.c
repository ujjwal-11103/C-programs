// #include <stdio.h>
// int ok(int *a, int *b);
// int main()
// {
//     int a, b;
//     ok(&a, &b);
//     printf("sum=%d\n", a);
//     printf("average=%d\n", b);

//     return 0;
// }
// int ok(int *a, int *b)
// {
//     int i = 5, j = 5, k, l;
//     k = i + j;
//     l = (i + j) / 2;
//     *a = k;
//     *b = l;
//     return 0;
// }

#include <stdio.h>
int ok(int c, int d, int *a, int *b);
int main()
{
    int x = 5, y = 5, a, b;
    ok(x, y, &a, &b);
    printf("sum=%d\n", a);
    printf("average=%d\n", b);

    return 0;
}
int ok(int c, int d, int *a, int *b)
{
    int k, l;
    k = c + d;
    l = (c + d) / 2;
    *a = k;
    *b = l;
    return 0;
}
