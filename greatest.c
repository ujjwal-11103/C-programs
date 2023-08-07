#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("enter four numbers=\n");
    scanf("%d%d%d%d", &a, &b, &c, &d);

    if (a > b)
    {
        if (a > c)
        {

            if (a > d)
            {
                printf("greatest no.=%d", a);
            }
            else
            {
                printf("greatest no.=%d", d);
            }
            
        }
       
    }
    
    
        else if (b > c)
        {
            if (b > d)
            {
                printf("greatest no=%d", b);
            }
            else
            {
                printf("greatest no.=%d", d);
            }
        }
        
    
    else if (c > d)
    {
        printf("greatest no.=%d", c);
    }
    else
    {
        printf("greatest no.=%d", d);
    }

    return 0;
}