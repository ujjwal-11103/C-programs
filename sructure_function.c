#include <stdio.h>
struct vector
{
    int x;
    int y;
};
struct vector summation(struct vector v1, struct vector v2)
{
    struct vector result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    return result;
}
int main()
{
    struct vector v1, v2, sum;
    v1.x = 10;
    v1.y = 20;
    v2.x = 30;
    v2.y = 40;
    sum = summation(v1, v2);
    printf("The result of X dimension is =%d and result of Y dimension=%d", sum.x, sum.y);
    return 0;
}
