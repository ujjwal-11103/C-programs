#include <stdio.h>
#include <conio.h>
int main()
{
    int i, n, prime;
    printf("Enter the number to check whether it is prime or not=\n");
    scanf("%d", &n);
    for (i = 2; i < n; i++)
    {
        if (n % 2 == 0)
        {
            prime = 1;
        }
    }
    if (prime == 1)
    {
        printf("The given number is not a prime number");
    }
    else
        printf("The given number is prime number");

    return 0;
}