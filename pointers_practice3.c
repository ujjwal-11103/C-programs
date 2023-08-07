// pointer to pointer type
#include <stdio.h>
int main()
{
    int i = 5;
    int *j = &i;
    int **k = &j;
    printf("the value of the i variable=%d\n", **(k)); //k variable pr j ka address store h and j ke address pr i and i variable pr 5 value store h
    printf("the address of i =%u\n", &i);              //i ka address
    printf("the address of the j variable=%u\n", &j);

    return 0;
}