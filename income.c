#include <stdio.h>
int main()
{
    float tax, income;

    printf("enter your income\n");
    scanf("%f", &income);
    if (income <= 250000)
    {

        printf("you dont have to pay tax\n");
    }

    if (income >250000 && income <=500000)
    {
        tax = 0.05 * (income);
        printf("you have to pay %f as income tax\n", tax);
    }
    if (income > 500000 && income < 1000000)
    {
        tax = 0.10 * (income);
        printf("you have to pay %f as income tax\n", tax);
    }
    if (income >= 1000000)
    {
        tax = 0.30 * (income);
        printf("you have to pay %f as income tax\n", tax);
    }
    return 0;
}