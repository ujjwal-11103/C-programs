#include <stdio.h>
#include <conio.h>
int main()
{
    int arr[10];
    int i, j, n;
    printf("Enter how many umbers u want to add in the array=\n");
    scanf("%d", &n);
    printf("Enter the elements of the array=\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                arr[i] = arr[j];
            }
        }
    }
    printf("The smallest element in the array=%d", arr[0]);

    return 0;
}