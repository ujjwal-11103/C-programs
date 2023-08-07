// #include<stdio.h>
// #define N 5  //here macro style is used
// int main()
// {
//     int arr[N];
//     for(int i=0;i<N;i++)
//     {
//     printf("enter the values for index  %d=",i);
//     scanf("%d",&arr[i]);
//     }
//     for (int i = 0; i < N; i++)
//     {
//         printf("%d is stored at index variable %d\n",arr[i],i);
//     }
    
//     return 0;
// }


#include<stdio.h>
// #define N 5  //here macro style is not used
int main()
{
    int arr[5];
    for(int i=0;i<5;i++)
    {
    printf("enter the values for index  %d=",i);
    scanf("%d",&arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d is stored at index variable %d\n",arr[i],i);
    }
    
    return 0;
}