#include <stdio.h>
int wrong_swap(int a, int b);
int swap(int *a, int *b);
int main()
{
    int x = 3, y = 4;
    printf("the value of x and y is %d and %d\n", x, y);
    // wrong_swap(x, y); //here x and y are actual parameters as they are passing values to a function
    swap(&x, &y);
    printf("the value of x and y after swap is %d and %d\n", x, y);

    return 0;
}
// int wrong_swap(int a, int b) // here a and b are formal parameters as they are receiving values from a funtion
// {
//     int c;
//     c = a;
//     a = b;
//     b = c;
//     return 0;
// }
int swap(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
    return 0;
}
