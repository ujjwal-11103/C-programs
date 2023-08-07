#include <stdio.h>
#include <conio.h>
int add(int n);
void main()
{
    int n, addition;
    printf("Enter the number=\n");
    scanf("%d", &n);
    addition = add(n);
    printf("The summation of %d is=%d", n, addition);
    getch();
}
int add(int n)
{
    if (n == 0)
    {
        return n;
    }
    else
        return (n + add(n - 1));
}