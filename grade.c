#include <stdio.h>
int main()
{
    int a;
    printf("enter your marks\n");
    scanf("%d", &a);

    if (a <= 100 && a >= 90)
    {
        printf("you have scored A grade\n");
    }

    if (a < 90 && a >= 80)
    {
        printf("you have scored B grade\n");
    }

    if (a < 80 && a >= 70)
    {
        printf("you have scored C grade\n");
    }

    if (a < 70 && a >= 60)
    {
        printf("you have scored D grade\n");
    }

    return 0;
}