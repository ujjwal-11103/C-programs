#include <stdio.h>
int main()
{
    int arr[2][3] = {{11, 22,55}, {33, 44,89}};
    int *ptr = &arr[0][0];

    printf("%d\n", arr[0][0]);
    printf("%u\n", &arr[0][0]);
    printf("%d\n", arr[0][1]);
    printf("%u\n", &arr[0][1]);
    printf("%d\n", arr[0][2]);
    printf("%u\n", &arr[0][2]);
    printf("%d\n", arr[1][0]);
    printf("%u\n", &arr[1][0]);
    printf("%d\n", arr[1][1]);
    printf("%u\n", &arr[1][1]);

    // for (int i = 0; i <2 ; i++)
    // {
    //     printf
    // }

    return 0;
}