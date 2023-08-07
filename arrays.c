// Type 1
#include <stdio.h>
int main()
{
    int i[5] = {1, 22, 35, 44, 56};
    printf("value stored at index 0 is =%d\n", i[0]);
    printf("value stored at index 1 is =%d\n", i[1]);
    printf("value stored at index 2 is =%d\n", i[2]);
    printf("value stored at index 3 is =%d\n", i[3]);
    printf("value stored at index 4 is =%d\n", i[4]);
    return 0;
}
// Type 2
#include <stdio.h>
int main()
{
    int i[] = {324, 3, 5, 7, 54, 676, 789, 6, 89};
    printf("value stored at index 0 is =%d\n", i[0]);
    printf("value stored at index 1 is =%d\n", i[1]);
    printf("value stored at index 2 is =%d\n", i[2]);
    printf("value stored at index 3 is =%d\n", i[3]);
    printf("value stored at index 4 is =%d\n", i[4]);
    printf("value stored at index 4 is =%d\n", i[5]);
    printf("value stored at index 4 is =%d\n", i[6]);
    printf("value stored at index 4 is =%d\n", i[7]);
    printf("value stored at index 4 is =%d\n", i[8]);
    return 0;
}

// Type 3
#include <stdio.h>
int main()
{
    int marks[5];
    printf("Enter the marks of 1st subject=\n");
    scanf("%d", &marks[0]);
    printf("Enter the marks of 2nd subject=\n");
    scanf("%d", &marks[1]);
    printf("Enter the marks of 3rd subject=\n");
    scanf("%d", &marks[2]);
    printf("Enter the marks of 4th subject=\n");
    scanf("%d", &marks[3]);
    printf("Enter the marks of 5th subject=\n");
    scanf("%d", &marks[4]);

    printf("You have enterd marks of 1st subject=%d\n", marks[0]);
    printf("You have enterd marks of 2nd subject=%d\n", marks[1]);
    printf("You have enterd marks of 3rd subject=%d\n", marks[2]);
    printf("You have enterd marks of 4th subject=%d\n", marks[3]);
    printf("You have enterd marks of 5th subject=%d\n", marks[4]);

    return 0;
}

//Type 4
#include <stdio.h>
int main()
{
    int s, h[5] = {1, 22, 35, 44, 56};
    for (s = 0; s < 5; s++)
    {
        printf("Value stored=%d\n", h[s]);
    }
    printf("Game Over");
    return 0;
}


