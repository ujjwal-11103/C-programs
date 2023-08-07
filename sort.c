#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array=\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array=\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // printf("The elements of the arrar are=\n");
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d\n", arr[i]);
    // }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("The sorted elements of the arrar are=\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}