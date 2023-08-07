// #include <stdio.h>
// int main()
// {
//     // char str[] = "hello";
//     // // char str[]={'h','e','l','l','o','\0'};
//     // char *ptr = str;
//     // for (int i = 0; i < 8; i++)
//     // {
//     //     printf("%c ", str[i]);
//     // }
//     // while (*ptr != '\0')
//     // {
//     //     printf("%c ", *ptr);
//     //     ptr++;
//     // }

//     // char *str = "hello world";
//     // printf("%s", str);

//     char s[10];
//     printf("Enter your name=\n");
//     scanf("%s",s);  //here it cannot print spaced names like Ujjwal Upadhyay
//     printf("your name is=%s\n",s);

//     // char ss[11];
//     // printf("Enter your name=\n");
//     // gets(ss);  //here it can print spaced names like Ujjwal Upadhyay by using gets
//     // printf("Your name is= %s\n",ss);
//     // puts(ss);

//     // char *ptr="hello world";  //string which  is defined by char *ptr[]="hello world" it can be reinitialize
//     // // char ptr[] = "Hello world"; // once the string is defined by char ptr[]="hello world" it cannot be reinitialize
//     // ptr = "hello dunia";   //reinitialized
//     // printf("%s\n", ptr);
//     return 0;
// }
#include <stdio.h>
#include <string.h>
int main()
{
    char s1[20]; // declaration of char array
    char s2[20]; // declaration of char array
    printf("Enter the first string : ");
    scanf("%s", &s1);
    printf("\nEnter the second string :");
    scanf("%s", &s2);
    strcat(s1, s2);
    printf("\nThe concatenated string is : %s", s1);
    return 0;
}