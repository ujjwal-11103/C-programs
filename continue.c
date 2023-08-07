#include <stdio.h>
int main()
{
    int i, b = 5;
    // printf("enter the value of b=\n ");
    // scanf("%d", &b);
    for (i = 0; i < 10; i++)
    {
        if (i != b)
        {
            continue;
        }
        else
        {
            printf("%d", b);
        }
    }
    return 0;
}