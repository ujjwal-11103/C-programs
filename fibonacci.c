#include <stdio.h>
int main()
{
    int a = 0, b = 1, i, n, c;
    printf("enter the end value number\n");
    scanf("%d", &n);
    for (i = 1; i < n; i++)
    {
        c = a + b;
        a = b;
        b = c;
        printf("%d ", c);
    }

    return 0;
}