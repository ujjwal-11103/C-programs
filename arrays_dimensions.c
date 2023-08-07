//Type 4  ROWS AND COLUMN
#include<stdio.h>
int main()
{
    
    int marks[2][4]={{22,33,44,55},{23,33,43,53}};
    for(int i=0;i<2;i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("The value of %d ,%d is =%d\n",i,j,marks[i][j]);
        }
        
     
    }
    return 0;
}

