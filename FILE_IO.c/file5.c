#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("multiplicatio.txt", "w");

    int i, n;
    int mul;

    printf("Enter the number of whose you want the table=\n");
    scanf("%d", &n);

    for (i = 1; i < 11; i++)
    {
        mul = n * i;
        fprintf(fptr, "%d*%d=%d\n", n, i, mul);
    }

    fclose(fptr);

    return 0;
}