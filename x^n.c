#include <stdio.h>
#include <conio.h>
int power(int base, int a);
void main()
{
    int base, a, pow;
    printf("Enter the base number=\n");
    scanf("%d", &base);

    printf("Enter the power=\n");
    scanf("%d", &a);

    pow = power(base, a);
    printf("%d^%d=%d", base, a, pow);
    getch();
}
int power(int base, int a)
{
    if (a == 0)
    {
        return 1;
    }
    else
        return (base * (power(base, a - 1)));
}
