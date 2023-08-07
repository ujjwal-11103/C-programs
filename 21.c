#include <stdio.h>
#include <conio.h>
struct player
{
    char pname[10];
    char tname[10];
    float avg;
};

int main()
{
    struct player s[10];
    int i;
    for (i = 0; i < 2; i++)
    {
        printf("Enter the %d player name ,team name,batting average for=", i + 1);
        scanf("%s%s%f", &s[i].pname, &s[i].tname, &s[i].avg);
    }
    printf("The details are=\n");
    for (i = 0; i < 2; i++)
    {
        printf("%s\t%s\t%.2f\t", s[i].pname, s[i].tname, s[i].avg);
        printf("\n");
    }

    return 0;
}