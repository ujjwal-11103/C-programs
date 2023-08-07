// #include <stdio.h>
// #include <string.h>
// int occurence(char *c, char p[10]);
// int main()
// {
//     char c[10] = "ujjwal";
//     int count;
//     count = occurence(c, "j");
//     printf("The letter 'j' has occured %d time", count);
//     return 0;
// }
// int occurence(char *c, char p[10])
// {
//     char *ptr = c;
//     int count = 0;
//     while (*ptr != 0)
//     {
//         if (*ptr == *p)
//         {
//             count++;
//         }
//         ptr++;
//     }
//     return count;

//     // char p[5] ="jd";
//     // char *ptr=p;
//     // // printf("%u\n",&p[0]);
//     // // printf("%c", *p);
//     // // printf("%c", *(p+1));
//     // printf("%c",p[1]);
//     // return 0;
// }

// to check whether a character is present in a string or not

#include <stdio.h>
#include <string.h>
int main()
{
    char str[10] = "Ujjwal";
    char c;
    int len, flag = 0;
    len = strlen(str);
    printf("The length of the string=%d\n", len);
    printf("Enter any character to check whether it is present in a string or not=");
    scanf("%c", &c);
    for (int i = 0; i < len; i++)
    {
        printf("%c \n", str[i]);
    }

    for (int i = 0; i < len; i++)
    {
        if (str[i] == c) // or  if(str[i] == *c)     //*c=&c[0]
        {
            printf("The character '%c' is present in the string '%s' ", c, str);
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("The character %c is not present in the string '%s'", c, str);
    }

    return 0;
}