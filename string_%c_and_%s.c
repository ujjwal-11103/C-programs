#include <stdio.h>
int main()
{
    // char str[] = "hello";
    // printf("%s",str);
    char str[]={'h','e','l','l','o','\0'};
    // char *ptr = str; 
    for (int i = 0; i < 6; i++)
    {
        printf("%c ", str[i]);
    }
    // printf("\n");
    // while (*ptr != '\0')
    // {
    //     printf("%c ", *ptr);
    //     ptr++;
    // }
    // printf("\n");
    // char *strr = "hello world";
    // printf("%s", strr);
    return 0;
}