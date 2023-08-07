#include <stdio.h>
#include <conio.h>
void main()
{
    int arr[10];
    int i, j;
    float sum = 0;

    printf("Enter the 10 numbers=\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", arr[i]);
    }
    for (i = 0; i < 10; i++)
    {
        sum = sum + arr[i];
    }
    printf("The average oh the 10 numbers entered=%.2f", sum / 10);

    getch();
}