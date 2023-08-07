#include <stdio.h>
void slice(char *strr, int m, int n)
{
    int i = 0;
    while ((m + i) < n)
    {
        strr[i] = strr[m + i];
        i++;
    }
    printf("%d\n", i);
    strr[i] = '\0';
}
int main()
{
    char str[] = "UJJWAL";
    char *ptr = str;
    slice(str, 2, 4);
    printf("The choose characters from the strings are =%s\n", str);
    return 0;
}