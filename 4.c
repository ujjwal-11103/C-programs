#include <stdio.h>
#include <conio.h>
void main()
{
    int arr[10][10];
    int m, n;
    int i, j;
    int temp;

    printf("Enter the no of rows u want=\n");
    scanf("%d", &m);

    printf("Enter the no of columns u want=\n");
    scanf("%d", &n);

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter the elements of arr[%d][%d]=\n", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The original matrix=\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    // printf("\n");

    for (i = 0; i < m; i++)
    {
        for (j = 1; j < n; j++)
        {

            temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    // int sum = 0;
    // for (i = 0; i < m; i++)
    // {
    //     for (j = 0; j < n; j++)
    //     {
    //         sum = sum + arr[i][j];
    //     }
    // }
    // printf("The sum of the matrix=%d",sum);

        printf("\n");
        printf("The transpose of the matrix=\n");

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                printf("%d\t", arr[i][j]);
                if (j == m - 1)
                {
                    printf("\n");
                }
            }
            // printf("\n");
        }

        getch();
    }