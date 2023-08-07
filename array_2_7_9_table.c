// #include <stdio.h>
// int main()
// {
//     int s = 0;
//     int q = 0;
//     int r = 0;
//     int arr[3][10];
//     int *ptr = &arr[0][0];
//     int *ptrr = &arr[1][0];
//     int *ptrrr = &arr[2][0];

//     for (int i = 1; i < 11; i++)
//     {
//         s = 2 * i;
//         *ptr = s;
//         ptr++;
//     }

//     for (int j = 0; j < 10; j++)
//     {
//         printf("%d ", arr[0][j]);
//     }
//     printf("\n");

//     for (int k = 1; k < 11; k++)
//     {
//         q = 7 * k;
//         *ptrr = q;
//         ptrr++;
//     }
//     for (int j = 0; j < 10; j++)
//     {
//         printf("%d ", arr[1][j]);
//     }
//     printf("\n");

//     for (int k = 1; k < 11; k++)
//     {
//         r = 9 * k;
//         *ptrrr = r;
//         ptrrr++;
//     }
//     for (int j = 0; j < 10; j++)
//     {
//         printf("%d ", arr[2][j]);
//     }
//     printf("\n");

//     printf("%d\n", arr[1][1]);

//     return 0;
// }

#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter how many  rows you want=\n");
    scanf("%d", &x);

    printf("Enter how many columns you want=\n");
    scanf("%d", &y);

    int k;
    printf("Enter whose table do you want in first row=\n");
    scanf("%d", &k);

    int arr[x][y];
    int *ptr = &arr[0][0];
    int *ptrr = &arr[1][0];
    int *ptrrr = &arr[2][0];

    int s = 0;

    for (int i = 1; i <= y; i++)
    {
        s = k * i;
        *ptr = s;
        ptr++;
    }
    for (int j = 0; j < y; j++)
    {
        printf("%d ", arr[0][j]);
    }
    printf("\n");
    printf("-------------------------------------------------------------------------------------------------------------------------------------------------------");
    printf("\n");

    int l;
    printf("Enter whose table do you want in second row=\n");
    scanf("%d", &l);

    int q = 0;

    for (int i = 1; i <= y; i++)
    {
        q = l * i;
        *ptrr = q;
        ptrr++;
    }
    for (int j = 0; j < y; j++)
    {
        printf("%d ", arr[1][j]);
    }
    printf("\n");
    printf("-------------------------------------------------------------------------------------------------------------------------------------------------------");
    printf("\n");

    int m;
    printf("Enter whose table do you want in third row=\n");
    scanf("%d", &m);

    int r = 0;

    for (int i = 1; i <= y; i++)
    {
        r = m * i;
        *ptrrr = r;
        ptrrr++;
    }
    for (int j = 0; j < y; j++)
    {
        printf("%d ", arr[2][j]);
    }
    return 0;
}
