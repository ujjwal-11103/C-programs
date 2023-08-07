// #include <stdio.h>
// #include <conio.h>

// int transpose(int a[50][50], int m, int n);

// int main()
// {
//     int m, n, a[50][50], i, j;
//     printf("Enter how many row you want=\n");
//     scanf("%d", &m);
//     n = m;
//     for (i = 0; i < n; i++)
//     {
//         for (j = 0; j < n; j++)
//         {
//             printf("Enter the element of the matrix=(%d,%d)=\n", i, j);
//             scanf("%d", &a[i][j]);
//         }
//     }

//     printf("The Original matrix=\n");
//     for (i = 0; i < n; i++)
//     {
//         for (j = 0; j < n; j++)
//         {
//             printf("%d\t", a[i][j]);
//         }
//         printf("\n");
//     }
//     transpose(a, m, n);

//     return 0;
// }
// int transpose(int a[50][50], int m, int n)
// {
//     int i, j, temp;
//     for (i = 0; i < n; i++)
//     {
//         for (j = 1; j < n; j++)
//         {
//             temp = a[i][j];
//             a[i][j] = a[j][i];
//             a[j][i] = temp;
//         }
//     }
//     printf("\n");
//     printf("The Transpose of the matrix=\n");
//     for (i = 0; i < n; i++)
//     {
//         for (j = 0; j < n; j++)
//         {
//             printf("%d\t", a[i][j]);
//         }
//         printf("\n");
//     }
// }

#include <stdio.h>
#include <conio.h>

int transpose(int a[50][50], int m, int n);

int main()
{
    int m, n, a[50][50], i, j;

    printf("Enter how many row you want=\n");
    scanf("%d", &m);

    printf("Enter how many column you want=\n");
    scanf("%d",&n);

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter the element of the matrix=(%d,%d)=\n", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("The Original matrix=\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    transpose(a, m, n);

    return 0;
}
int transpose(int a[50][50], int m, int n)
{
    int i, j, temp;
    for (i = 0; i < m; i++)
    {
        for (j = 1; j < n; j++)
        {
            temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }
    printf("\n");
    printf("The Transpose of the matrix=\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}
