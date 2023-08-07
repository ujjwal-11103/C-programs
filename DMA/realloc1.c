#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr = (int *)malloc(10 * sizeof(int));
    int n;

    printf("Enter the number=\n");
    scanf("%d", &n);

    for (int i = 1; i < 11; i++)
    {
        ptr[i] = n * i;
        printf("%d*%d=%d\n", n, i, ptr[i]);
    }
    printf("\n");
    printf("After reallocating=\n\n ");
    ptr = (int *)realloc(ptr, 15 * sizeof(int));

    for (int i = 1; i < 16; i++)
    {
        ptr[i] = n * i;
        printf("%d*%d=%d\n", n, i, ptr[i]);
    }

    return 0;
}