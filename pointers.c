#include <stdio.h>
int main()
{
    int i = 5;
    int *j = &i;

    printf("the value of i =%d\n", i);
    printf("the value of i =%d\n", *j);
    printf("the value of i =%u\n", *j);    //88
    printf("the address of i =%u\n", &i);  //i ka address
    printf("the address of i =%u\n", j);   //i ka address
    printf("the address88 of i =%d\n", j);   //88
    printf("the address of j =%u\n", &j);  //j ka address
    printf("the value of i =%u\n", *(&j)); //j ke address pr i ka address as a value store hai

    return 0;
}
