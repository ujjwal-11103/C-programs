#include <stdio.h>
int main()
{
    int i, n, s;
    printf("enter the no. to get its table=\n");
    scanf("%d", &n);
    for (i = 10; i; i--)
    {
        s = i * n;
        printf("%d\n", s);
    }

    return 0;
}