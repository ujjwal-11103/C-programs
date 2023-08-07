#include <stdio.h>
#include <conio.h>
int main()
{
    int arr[10];
    int i, j;
    int temp;
    printf("Enter the element of the arrays=\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    // printf("the element of the arrays are=\n");
    // for (i = 0; i < 10; i++)
    // {
    //     printf("%d", arr[i]);
    // }
    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    // printf("The largest number if the given array elements is%d", arr[0]);
    for (i = 0; i < 10; i++)
    {
        printf("%d", arr[i]);
    }

    return 0;
}