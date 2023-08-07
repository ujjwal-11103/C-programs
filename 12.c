#include <stdio.h>
#include <conio.h>
int fact(int n);
void main()
{
    int i,j,n,factorial;
    printf("Enter the umber to find the factorial=\n");
    scanf("%d",&n);
    factorial=fact(n);
    printf("The factorial of %d is=%d",n,fact(n));
    getch();
}
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    return(n*fact(n-1));
}