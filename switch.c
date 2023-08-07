#include <stdio.h>
int main()
{
    int a;
    printf("enter case no. from 1 to 5\n");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("you enterd 1\n");
        break;

    case 2:
        printf("you enterd 2\n");
        break;

    case 3:
        printf("you enterd 3\n");
        break;

    case 4:
        printf("you enterd 4\n");
        break;

    case 5:
        printf("you enterd 5\n");
        break;

    default:
        printf("invalid response\n");
        break;
    }

    return (0);
}