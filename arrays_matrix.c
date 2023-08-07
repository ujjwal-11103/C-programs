
// 4X4 matrix
#include <stdio.h>
int main()
{

    int marks[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 8, 7, 6}, {5, 4, 3, 2}}; // here marks[i]=rows and marks[j]=columns    and     {}and{} are for rows and   these elements which are in curly brace are columns
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", marks[i][j]);
        }
        printf("\n");
    }
    return 0;
}

// //4X2 matrix
// #include <stdio.h>
// int main()
// {

//     int marks[4][2] = {{1, 5}, {5, 6}, {8, 6}, {3, 2}}; //here marks[i]=rows and marks[j]=columns    and     {}and{} are for rows and   these elements which are in curly brace are columns
//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             printf("%d ", marks[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }