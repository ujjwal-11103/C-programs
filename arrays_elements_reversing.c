#include <stdio.h>
void recursive(int *p);
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr; // arr=arr[0]
    recursive(arr);
    for (int m = 0; m < 5; m++)
    {
        printf("The reversed elements of the arrays are as follows=%d\n", arr[m]);
    }
    return 0;
}
void recursive(int *p)
{
    int k = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("The elements of the arrays are as follows=%d\n", *(p + i));
    }

    int j = 4;
    int swap;
    for (int l = 0; l < 2; l++)
    {
        swap = *(p + l);
        *(p + l) = *(p + j);
        *(p + j) = swap;
        j--;
    }

    printf("%d\n", *(p + 0));
    printf("%d\n", *(p + 1));
    printf("%d\n", *(p + 2));
    printf("%d\n", *(p + 3));
    printf("%d\n", *(p + 4));
}
