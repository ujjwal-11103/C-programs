#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, c;
    int big;
    printf("Enter the three number=\n");
    scanf("%d%d%d", &a, &b, &c);
    big = a > b ? (a > c ? a : c) : (b > c ? b : c);
    printf("The largest number form the given three number=%d", big);

    return 0;
}