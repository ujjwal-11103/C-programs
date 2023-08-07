#include <stdio.h>
int main()
{

    int i, n, factorial = 1;
    printf("enetr the no.to get its factorial=\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        factorial = factorial * i;
        printf("%d\n",factorial);
    }
    printf("The value of %d!=%d\n", n, factorial);
    return 0;
}