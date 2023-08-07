#include <stdio.h>
int main()
{
    int n;
    FILE *fptr;
    fptr = fopen("text1.txt", "r");
    for (int i = 0; i < 5; i++)
    {
        fscanf(fptr, "%d", &n);
        printf("%d", n);
    }

    return 0;
}