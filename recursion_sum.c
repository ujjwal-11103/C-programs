#include <stdio.h>
int sum(int n);
int main()
{
    int n;

    printf("addition of the first given n natural number =%d", sum(n));

    return 0;
}
int sum(int n)
{
    int q, i, sum = 0;
    printf("enter the number to add upto it=\n");
    scanf("%d", &q);
    for (i = 1; i <= q; i++)
    {
        sum = sum + i;
        printf("%d\n", sum);
    }
    return sum;
}