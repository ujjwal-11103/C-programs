#include <stdio.h>
#include <conio.h>
void main()
{
    int a;
    int sum=0;
    int marks[5];
    int i;
    printf("%d\n",a);
    printf("Enter the 5 number=\n");

    for (i = 0; i <5; i++)
    {
        scanf("%d\n", &marks[i]);
        sum = sum + marks[i];
    }

    // for (i = 0; i < 5; i++)
    // {
    // }
    printf("%d", sum);
    getch();
}