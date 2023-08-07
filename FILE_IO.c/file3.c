#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("odd", "w");
    int n, odd;

    printf("Enter the maximum number you want=");
    scanf("%d", &n);

    fprintf(fptr, "%s", "The odd numbers are=\n");
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            fprintf(fptr, "%d ", i);
        }
    }
    fclose(fptr);
    return 0;
}