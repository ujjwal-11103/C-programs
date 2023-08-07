#include <stdio.h>
int main()
{
    int i = 1, n = 5, s = 1;
    while (i <= n)
    {
        s = s * i;
        i++;
    }
    printf("%d", s);

    return 0;
}