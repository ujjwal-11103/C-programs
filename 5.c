#include <stdio.h>
#include <conio.h>
int lcm(int a, int b);
// int gcd(int a, int b);
void main()
{
    int x, y;
    printf("Enter 1st number\n");
    scanf("%d", &x);
    printf("Enter 2nd number\n");
    scanf("%d", &y);

    printf("The LCM of %d and %d=%d", x, y, lcm(x, y));
    // printf("The GCD of %d and %d=%d", x, y, gcd(x, y));
    getch();
}
int lcm(int a, int b)
{
    static int m = 0;
    m = m + b;
    if (m % a == 0 && m % b == 0)
    {
        return m;
    }
    return lcm(a, b);
}
// int gcd(int a, int b)
// {
//     if (b != 0)
//         return (b, a % b);
//     else
//         return a;
// }
