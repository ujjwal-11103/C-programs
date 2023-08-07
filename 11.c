#include <stdio.h>
#include <conio.h>
void main()
{
    int a = 0, b = 1, i, j, c, n;
    printf("Enter upto where u want to print fibonacci series=\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        c = a + b;
        a = b;
        b = c;
        printf("%d ", c);
    }

    getch();
}