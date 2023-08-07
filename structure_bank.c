#include <stdio.h>
typedef struct bank
{
    char name[10];
    int no;
    int balance;
} bnk;
void bob(bnk g, int j)
{
    if (j == 0)
    {
        printf("Name\tAccount no\tBalance\n");
    }
    // printf("%d\n", j);
    printf("%s\t%d \t%d \t", g.name, g.no, g.balance);
    printf("\n");
}
int main()
{
    bnk b[10];
    for (int i = 0; i < 2; i++)
    {
        printf("Enter the Bank details of %d person\n Enter name ,Account number and Bank balance=\n", i + 1);
        scanf("%s%d%d", &b[i].name, &b[i].no, &b[i].balance);
    }
    for (int i = 0; i < 2; i++)
    {
        static int count = 0;
        bob(b[i], count);
        count++;
    }

    return 0;
}
