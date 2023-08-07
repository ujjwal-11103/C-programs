#include <stdio.h>
int main()
{
    int i, n, s = 0;
    for (i = 1; i <= 10; i++)
    {
        s = s + (8 * i);
    }
        printf("%d\n", s);

    return 0;
}