#include <stdio.h>
#include <string.h>
int main()
{
    // char st1[100];
    // int i = 0;
    // char c;
    // printf("Enter the string character by character=\n");
    // while (c != '\n')
    // {
    //     fflush(stdin);
    //     scanf("%c", &c);
    //     st1[i] = c;
    //     i++;
    // }
    // puts(st1);
    int arr[3] = {1, 2, 3};
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}
