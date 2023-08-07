#include <stdio.h>

int main()
{
    int arr[4];
    int *ptr = arr; //here arr is arr[0]
    int i, j;
    for (i = 0; i < 4; i++)
    {
        printf("Enter %d numbers\n", i + 1);
        scanf("%d", ptr + i); //here & will not come as it already had stored the address
    }
    for (j = 0; j < 4; j++)
    {
        printf("You have entered the values=%d\n", arr[j]);
     
    }
    return 0;
}
