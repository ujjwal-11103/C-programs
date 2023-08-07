#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int j = 4;
    int swap;

    for (int i = 0; i < 2; i++)
    {
        swap = arr[i];
        arr[i] = arr[j];
        arr[j] = swap;
        j--;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d", arr[i]);
    }

    return 0;
}