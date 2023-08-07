#include <stdio.h>
#include <conio.h>
#include<string.h>
int main()
{
    int i, j, len;
    char str[10];

    printf("Enter the string to reversed it=\n");
    scanf("%s", &str);

    len = strlen(str);

    for (i = len - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }

    return 0;
}