#include <stdio.h>
int sum(int a, int b); //here int a and int b are taking values therefore they are prototypes and a and b are parameters
                       //sum is a function which takes a and b as input and return integer as output
int main()
{
    sum(2, 5); //function call or function declare and here 2 and 15 are called arguments
    return 0;
}
int sum(int a, int b) //function define
{
    int c;
    c = a + b;
    printf("value =%d\n", c);
}