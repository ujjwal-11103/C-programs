// #include <stdio.h>
// #include <conio.h>
// int main()
// {
//     int i, j, n, k;
//     for ( i = 0; i < 5; i++)
//     {
//         for ( j = 0; j < i; j++)
//         {
//             printf("%c",'A'-1+i);
//         }
//         printf("\n");
//     }

//     return 0;
// }
#include <stdio.h>
#include <conio.h>
int main()
{
    int i, j, k, n;
    printf("Enter the number=\n");
    scanf("%d", &n);
    for (i = 1; i <=n; i++)
    {
        for (k = n; k >=i+1; k--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            // printf("%c ", 'A' + i);
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
