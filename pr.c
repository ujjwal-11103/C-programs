#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct details
{
    int name[100];

} inf;

int main()
{
    inf dt[100];

    int item[100];
    int count = 1;
    int qty;
    int j = 0;
    int choice;

    for (int i = 1; i < 6; i++)
    {
        printf("Enter the price of %d item=\n", i);
        scanf("%d", &item[i]);
    }

    printf("\t\t\t\t !! THE DELICIOUS RESTAURANT !!\n");

    for (int i = 0; i < count; i++)
    {
        printf("Enter the Name of the person=\n");
        scanf("%s", dt[j].name);
        j++;
    }
    for (int i = 0; i < count; i++)
    {

        printf("What do you want to buy=\n");

        printf("1) Pizza  (Rs.%d)\n", item[1]);
        printf("2) Burger (Rs.%d)\n", item[2]);
        printf("3) Samosa (Rs.%d)\n", item[3]);
        printf("4) Momos  (Rs.%d)\n", item[4]);
        printf("5) Chinese(Rs.%d)\n", item[5]);

        scanf("%d", &choice);

        printf("How many quantity=\n");
        scanf("%d", &qty);

        printf("Total =\n");
        int result;
        switch (choice)
        {
        case 1:
            result = item[1] * qty;
            printf("%d", result);
            break;
        case 2:
            result = item[2] * qty;
            printf("%d", result);
            break;
        case 3:
            result = item[3] * qty;
            printf("%d", result);
            break;
        case 4:
            result = item[4] * qty;
            printf("%d", result);
            break;
        case 5:
            result = item[5] * qty;
            printf("%d", result);
            break;

        default:
            printf("Please Enter a valid choice\n");
            break;
        }
    }
    return 0;
}