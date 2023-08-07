// #include <stdio.h>
// int main()
// {
//     int x = 0;
//     if (x == 1)
//         if (x == 0)
//             printf("inside if\n");
//         else
//             printf("inside else if\n");
//     else
//         printf("inside else\n");
// }
#include <stdio.h>
void main()
{
    m();
    m();
}
void m()
{
    static int x = 5;
    x++;
    printf("%d", x);
}