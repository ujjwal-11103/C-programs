#include <stdio.h>
#include<conio.h>
struct student
{
    char name[10];
    int rollno;
    int fees;
};
int main()
{
    struct student s[10];
    int i, j;
    for (i = 0; i < 2; i++)
    {
        printf("Enter the name ,roll no and fees of %d student=", i + 1);
        scanf("%s%d%d", &s[i].name, &s[i].rollno, &s[i].fees);
    }
    printf("\n");
    printf("The enterd details are=\n");
    for (i = 0; i < 2; i++)
    {
        printf("%s\t%d\t%d\t", s[i].name, s[i].rollno, s[i].fees);
        printf("\n");
    }
    return 0;
}
