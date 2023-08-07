#include <stdio.h>
int main()
{
    int year;
    printf("enter year to check whether it is a leap year or not=\n");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        printf("Its a leap year(366 days)\n");
    }
    else
    {
        printf("It is not a leap year(365 days)\n");
    }
    return 0;
}