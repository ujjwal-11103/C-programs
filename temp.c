#include <stdio.h>
int main()
{
    int arr[10][10];
    int temp, r, c;
    printf("Enter how many rows you want=");
    scanf("%d", &r);
    printf("Enter how many columns you want=");
    scanf("%d", &c);

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter the element of arr[%d][%d]", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("The original matrix will be\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    // printf("%d", arr[0][1]);
    for (int i = 0; i < r; i++)
    {
        for (int j = 1; j < c; j++)
        {
            temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    printf("The transpose matrix will be\n");
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf("%d ", arr[i][j]);
            if (j == r - 1)
            {
                printf("\n");
            }
        }
    }
    return 0;
}