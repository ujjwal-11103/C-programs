#include <stdio.h>
#include <string.h>
int length(char *ptr)
{
    int len = 0;
    while (*ptr != '\0')
    {
        len++;
        ptr++;
    }
    return len;
}
int main()
{
    char str[] = "HELLO";
    char *ptr = str;
    // printf("%d\n",ptr);
    int l = length(str);
    printf("The length of the strint=%d\n", l);
    return 0;
}