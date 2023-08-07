#include <stdio.h>
#include <conio.h>
int main()
{
    for (int i = 1; i < 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" *");
        }
        printf("\n");
    }

    //
    printf("\n");

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    //
    printf("\n");

    for (int i = 5; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    // OR
    printf("\n");

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5 - i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    //

    printf("\n");

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    //
    printf("\n");
    printf("\n");

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 4 - i + 1; j++)
        {
            printf(" *");
        }
        printf("\n");
    }

    //
    printf("\n");

    for (int i = 1; i <= 5; i++)
    {
        for (int k = i; k < 5; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    for (int i = 1; i <= 5; i++)
    {
        for (int k = 5; k > 5 - i + 1; k--)
        {
            printf(" ");
        }
        for (int j = 5; j >= i; j--)
        {
            printf(" *");
        }
        printf("\n");
    }
    //
    printf("\n");
    for (int i = 1; i <= 5; i++)
    {
        for (int k = 5; k > 5 - i + 1; k--)
        {
            printf(" ");
        }
        for (int j = 5; j >= i; j--)
        {
            printf(" *");
        }
        printf("\n");
    }
    for (int i = 1; i <= 5; i++)
    {
        for (int k = i; k < 5; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf(" *");
        }
        printf("\n");
    }

    //
    printf("\n");

    int p = 0;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        for (int k = 1; k <= 8 - p; k++)
        {
            printf(" ");
        }
        p = p + 2;
        for (int m = 1; m <= i; m++)
        {
            printf("*");
        }
        printf("\n");
    }
    int l = 0;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 4; j >= i; j--)
        {
            printf("*");
        }
        for (int k = 1; k <= 2 + l; k++)
        {
            printf(" ");
        }
        l = l + 2;
        for (int m = 4; m >= i; m--)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
// #include <stdio.h>
// int main()
// {
//     int a;
//     int b=1;
//     printf("Enter the number=");
//     scanf("&d", &a);
//     printf("%d\n", a > 8||b++);
//     printf("%d",b);
//     return 0;
// }