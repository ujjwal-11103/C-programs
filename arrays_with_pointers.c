// #include <stdio.h>

// int main()
// {
//     int arr[5] = {11, 22, 33, 44, 55};

//     printf("The address of arr[0]=%d\n", &arr[0]);
//     printf("The address of arr[0]=%d\n", arr);

//     printf("The address of arr[1]=%d\n", &arr[1]);
//     printf("The address of arr[1]=%d\n", (arr + 1));

//     //accessing values

//     printf("The value at arr[0]is =%d\n", *(&arr[0]));
//     printf("The value at arr[0]is =%d\n", arr[0]);
//     printf("The value at arr[0]is =%d\n", *(arr));

//     printf("The value at arr[1]is =%d\n", *(&arr[1]));
//     printf("The value at arr[1]is =%d\n", arr[1]);
//     printf("The value at arr[1]is =%d\n", *(arr + 1));
//     return 0;
// }
#include <stdio.h>
int main()
{
    char arr[2][2] = {{1, 2}, {3, 4}};
    printf("The address of arr[0][0]=%u\n", &arr[0][0]);
    printf("the value at arr[0][0] is= %d\n", arr[0][0]);
    printf("The address of arr[0][1]=%d\n", &arr[0][1]);
    printf("The value at arr[0][1]=%d\n", arr[0][1]);
    printf("The address of arr[1][0]=%d\n", &arr[1][0]);
    printf("The value at arr[1][0]=%d\n", arr[1][0]);
     printf("The address of arr[1][1]=%d\n", &arr[1][1]);
    printf("The value at arr[1][1]=%d\n", arr[1][1]);

    return 0;
}