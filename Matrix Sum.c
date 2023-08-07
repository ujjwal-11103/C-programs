#include <stdio.h>
#include <conio.h>
void main()
{
    int mat1[10][10], mat2[10][10], i, j, m, n, sum[10][10];
    printf("Enter the no of rows do u want=\n");
    scanf("%d", &m);
    printf("Enter the no of columns do u want=\n");
    scanf("%d", &n);

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter the element of mat1[%d][%d]=", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter the element of mat2[%d][%d]=", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }
    printf("The mat1 elements are=\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", mat1[i][j]);
        }
        printf("\n");
    }
    printf("The mat2 elements are=\n");

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", mat2[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("The sum of the matrix are=\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            sum[i][j] = mat1[i][j] + mat2[i][j];
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    getch();
}