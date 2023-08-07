#include <stdio.h>
void display(int *ptr, int n);
int main()
{
    int arr[2][2];
    printf("Enter the value for (1,1)=\n");
    scanf("%d", &arr[0][0]);
    printf("Enter the value for (1,2)=\n");
    scanf("%d", &arr[0][1]);
    printf("Enter the value for (2,1)=\n");
    scanf("%d", &arr[1][0]);
    printf("Enter the value for (2,2)=\n");
    scanf("%d", &arr[1][1]);
    display(&arr[0][0], 2);

    return 0;
}
void display(int *ptr, int n)
{
    for (int k = 0; k < 2; k++)
    {
        printf("%d ", *(ptr + k));
    }
    printf("\n");
    for (int l = 2; l < 4; l++)
    {
        printf("%d ", *(ptr + l));
    }
}

