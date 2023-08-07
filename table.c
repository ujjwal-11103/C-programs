#include <stdio.h>
int main()
{
    int i, n, s;
    printf("enter the no. to get its table=\n");
    scanf("%d", &n);
    for (i = 1; i <= 10; i++)
    {
        s = i * n;
        printf("The value of %d X %d= %d\n", n, i, s);
    }

    return 0;
}