#include<stdio.h>
int main()
{
    char ch;
    printf("enter the character=\n");
    scanf("%c",&ch);

if (ch>=97 && ch<=122)
{
    printf("its in lowercase");
}
else
{
    printf("its in uppercase");
}

    return 0;
}