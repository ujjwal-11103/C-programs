// STRING LENGTH
#include <stdio.h>
#include <string.h>
int main()
{
    char *str = "hello";
    char strr[] = "hellooooo";
    int a = strlen(str);
    printf("The length of the string is=%d\n", a);
    printf("%d \n", strlen(str));
    printf("%d \n", strlen(strr));
    return 0;
}

// STRING COPY
#include <stdio.h>
#include <string.h>
int main()
{
    char *str1 = "hello";
    char str2[10];
    // strcpy(str2, str1);
    // printf("The content of str1 is copied to str2=%s\n", str2);
    printf("The content of str1 when copied to str2 is=%s\n", strcpy(str2, str1));
    printf("%s",str2);
    return 0;
}

// STRING CONCATENATION
#include <stdio.h>
#include <string.h>
int main()
{
    char *str1 = "hello";
    char str2[10] = "HELLO ";
    strcat(str2, str1);
    printf("The updated value of str1 is =%s", str2);=
    return 0;
}

// STRING COMPARE
#include <stdio.h>
#include <string.h>
int main()
{
    // char *str1 = "HELLO";
    // char *str2 = "HELLO";
    char *str1 = "HeLLO"; // NEGATUVE VALUE IF FIRST STRING'S MISMATCHING CHARACTERS ASCII CODE IS NOT GREATER THAN SECOND STRING'S CORRESPONDING MISMATCHING CHARACTERS
    char *str2 = "HELLO"; // OTHERWISE IF IT IS GREATER THAN IT WILL RETURN POSITIVE VALUE  //IN THIS CASE THE ASCII VALUE OF SMALL e IS GREATER THE CAPTAL E
    int cmp = strcmp(str1, str2);
    printf("The comparison of str1 and str2 is =%d\n", cmp);
    return 0;
}
