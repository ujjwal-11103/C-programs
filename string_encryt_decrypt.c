// ENCRYPT
#include <stdio.h>
#include <string.h>
void encrypt(char *c);
int main()
{
    char s[] = "hello";
    // printf("The address of s is =%u\n", s);
    encrypt(s);
    printf("The encrypted string =%s", s);

    return 0;
}
void encrypt(char *c)
{
    char *ptr = c;

    // printf("the address of c is =%u\n", c);
    // printf("the content of p is =%u\n", ptr);
    // printf("the address of p is =%u\n", &ptr);

    while (*ptr != 0)
    {
        *ptr = *ptr + 1;
        ptr++;
    }
}

// DECRYPT 
#include <stdio.h>
#include <string.h>
void encrypt(char *c);
int main()
{
    char s[] = "ifmmp";
    // printf("The address of s is =%u\n", s);
    encrypt(s);
    printf("The decrypted string =%s", s);

    return 0;
}
void encrypt(char *c)
{
    char *ptr = c;

    // printf("the address of c is =%u\n", c);
    // printf("the content of p is =%u\n", ptr);
    // printf("the address of p is =%u\n", &ptr);

    while (*ptr != 0)
    {
        *ptr = *ptr - 1;
        ptr++;
    }
}
