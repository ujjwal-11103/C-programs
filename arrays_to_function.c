#include <stdio.h>
void array(int *ptr, int n);
int main()
{
    int arr[5] = {11, 22, 33, 44, 55};
    array(arr, 5);                            //arr=&arr[0]
    printf("the changed value of arr[2]=%d\n", arr[2]); // as u have passed the address too
    return 0;
}

void array(int *ptr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("The elements of the arrays are as follows=%d\n", *(ptr + i));
    }
    printf("%d\n",*ptr);
    ptr[2] = 333;
}