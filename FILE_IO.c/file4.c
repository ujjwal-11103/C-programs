#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("2no.txt", "r");
    int a, b;
    int c;
    fscanf(fptr, "%d", &a);
    fscanf(fptr, "%d", &b);
    printf("The numbers in the other file are=%d and %d ", a, b);
    fclose(fptr);
    c = a + b;
    fptr = fopen("2no.txt", "w");
    fprintf(fptr, "%d", c);
    fclose(fptr);
    return 0;
}