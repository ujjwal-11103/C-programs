#include <stdio.h>
struct employee
{
    char name[10];
    int id;
    int salary;
};

int main()
{
    struct employee e[10];
    for (int i = 0; i < 2; i++)
    {
        printf("Enter the name, ID Salary of employee %d", i + 1);
        scanf("%s%d%f", &e[i].name, &e[i].id, &e[i].salary);
    }
    printf("The given details are=\n");
    for (int i = 0; i < 2; i++)
    {
        printf("%s\t%d\t%.2f", e[i].name, e[i].id, e[i].salary);
        printf("\n");
    }

    return 0;
}