// #include <stdio.h>
// int main()

// {
//     int i, n, prime;
//     printf("Enter the no to check whether its prime no. or not=\n");
//     scanf("%d", &n);
//     for (i = 2; i < n; i++)
//     {
//         if (n % i == 0)
//         {
//             prime = 1;
//             break;
//         }
//     }
//     if (prime == 1)
//     {
//         printf("the given no.%d is not a prime no.\n", n);
//     }
//     else
//     {
//         printf("the given no.%d is a prime no.\n", n);
//     }

//     return 0;
// }

#include <stdio.h>
int main()
{
    int flag = 0;
    int n;
    printf("Enter the number=");
    scanf("%d", &n);
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
        }
    }
    if (flag == 1)
    {
        printf("%d is not a prime number", n);
    }
    else
        printf("%d is a prime number", n);
    return 0;
}