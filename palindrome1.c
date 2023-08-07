#include <stdio.h>
#include <conio.h>
#include<string.h>
void main()
{
    int flag;
    char arr[10];
    int i, j;
    int length;
    printf("Enter the string or any word to check whether it is palindrome or not\n");
    scanf("%s",&arr);
    length=strlen(arr);
    for ( i = 0; i < length; i++)
    {
       if (arr[i]!=arr[length-i-1])
       {
         flag=1;
         break;
       }
       
        
    }
    if (flag=1)
    {
        printf("The string is not palindrome ");
    }
    else
    {
        printf("The strinf is palindrome");
    }
    
    getch();
}