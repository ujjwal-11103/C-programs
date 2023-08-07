#include <stdio.h>
#include <string.h>
int main()
{
    int flag = 0;
    char str[100];
    printf("Enter the string=\n");
    scanf("%s", str);
    int length;
    length = strlen(str);
    printf("length=%d\n", length);
    for (int i = 0; i < length; i++)
    {
        if (str[i] != str[length - i - 1])
        {
            flag = 1;
            break;
        }
    }
    if (flag)
    {
        printf("The enterd string %s is not palindrome", str);
    }
    else

        printf("The entered string %s is palindrome\n", str);

    return 0;
}

#include <stdio.h>
int main()
{
    int n, result = 0, q, rem;
    printf("Enter the number=\n");
    scanf("%d", &n);
    q = n;
    while (q != 0)
    {
        rem = q % 10;
        result = result * 10 + rem;
        q = q / 10;
    }
    if (result == n)
    {
        printf("The given number %d is palindrome",n);
    }
    else
    {
        printf("The given number %d is not palindrome",n);
    }

    return 0;
}