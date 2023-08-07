#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr = (int *)malloc(5 * sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the number=\n");
        scanf("%d", &ptr[i]);
    }
    printf("the no are=\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d", ptr[i]);
    }
    ptr = realloc(ptr, 10 * sizeof(int));
    for (int i = 0; i < 11; i++)
    {
        printf("Enter the number=\n");
        scanf("%d", &ptr[i]);
    }
    printf("the no are=\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d", ptr[i]);
    }
    return 0;
}