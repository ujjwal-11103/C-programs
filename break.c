#include <stdio.h>
int main()
{
    int a;
    for (a = 1; a < 10; a++)
    {
        printf("The no.=%d\n", a);
        if (a == 5)
        {
            printf("Break statement executed\n");
            break;
        }
    }

    return 0;
}