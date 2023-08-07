#include <stdio.h>
#include <string.h>
int main()
{
    char str1[10];
    char str2[10] = "hello";
    int i, l;
    l = strlen(str2);
    for (i = 0; i < l; i++)
    {
        str1[i] = str2[i];
    }
    puts(str1);
    puts(str2);

    return 0;
}