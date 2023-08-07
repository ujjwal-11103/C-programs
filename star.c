// #include<stdio.h>
// // #include<conio.h>
// int main()
// {
//     int i, j, n;
//     // clrscr();
//     printf("Enter how many rows do u want=");
//     scanf("%d", &n);
//     for (i = 1; i <= n; i++)
//     {
//         for (j = 0; j < i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }
#include<stdio.h>
int main()
{
    int i,j,n=5;
    for ( i = 1; i<=n; i++)
    {
        for ( j = 1; j <=n-i ; j++)
        {
            printf(" ");
        }
        for ( j=1; i <=i; j++)
        {
            printf("*");
        
        }
        printf("\n");
    }
    return 0;
}