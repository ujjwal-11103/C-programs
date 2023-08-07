#include <stdio.h>
#include <string.h>
int main()
{
    char *str1[10];
    char str2[10];
    char c;
    int i = 0;
    printf("Enter character for str1=\n");
    scanf("%s", &str1);
    printf("Enter character for str 2 letter wise=\n");
    while (c != '\n')
    {
        fflush(stdin);
        scanf("%c", &c);
        str2[i] = c;
        i++;
    }
    str2[i - 1] = '\0';
    printf("CHARCTERS IN STR1 ARE AS FOLLOWS=%s\n", str1);
    printf("CHARCTERS IN STR2 ARE AS FOLLOWS=%s\n", str2);
    printf("Comparing str1 and str2 with strcmp we get=%d\n", strcmp(*str1, str2));
    return 0;
}