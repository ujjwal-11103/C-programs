#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    int *ptr;

    printf("How many integers you want to add");
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int)); // collac will put initial value 0(zero) at the addresses

    // for (int i = 0; i < 5; i++)
    // {
    //     scanf("%d", &ptr[i]);
    // }

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", ptr[i]);
    }

    return 0;
}
