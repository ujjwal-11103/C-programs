#include <stdio.h>

int main()
{
    int a[3] = {1, 2, 3};
    int *i = &a[0];
    int *j = &a[1];
    int *k = &a[2];
    printf("address=%u\n", i);
    printf("address of a[0]=%u\n", &a[0]);
    printf("The value at index 0=%d\n", a[0]);
    printf("The value at index 0=%d\n", *(&a[0]));

    printf("\n");
    printf("address of a[1]=%u\n", &a[1]);
    printf("The value at index 1=%d\n", a[1]);
    printf("\n");

    printf("address of a[2]=%u\n", &a[2]);
    printf("The value at index 2=%d\n", a[2]);
    printf("\n");

    //incrementing pointer
    i = i + 1;
    printf("The address of pointer after incrementing=%u\n", i);
    printf("The value at pointer after incrementing=%d\n", *i);
    printf("\n");

    j = j - i;
    printf("the subtration of pointer j - pointer i=%d\n", j);
    printf("\n");

    k = k - i;
    printf("the subtration of pointer k - pointer i =%d\n", k);

    return 0;
}
