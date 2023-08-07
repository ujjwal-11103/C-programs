#include <stdio.h>
int main()
{
    int s = 0;
    int arr[10] = {};
    int *ptr = arr;
    for (int i = 1; i < 11; i++)
    {
        s = 5 * i;
        *ptr = s;
        ptr++;
        // printf("%d\n", s);
    }
    printf("The elements of the arrays are as follows=\n");
    for (int j = 0; j < 10; j++)
    {
        printf("Element at index %d is=%d\n", j, arr[j]);
    }
    //checking 
    printf("%d\n",arr[0]);
    printf("%d\n",arr[1]);
    printf("%d\n",arr[2]);
    printf("%d\n",arr[3]);
    printf("%d\n",arr[4]);
    return 0;
}