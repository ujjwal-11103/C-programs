#include <stdio.h>

int main()
{
    int arr[4];
    int i, j;
    int *ptr = arr; // here arr is arr[0]
    for (i = 0; i < 4; i++)
    {
        printf("Enter %d numbers\n", i + 1);
        scanf("%d", ptr); // here & will not come as it already had stored the address
        ptr++;
    }
    for (j = 0; j < 4; j++)
    {
        printf("You have entered the values=%d\n", arr[j]);
    }
    return 0;
}
