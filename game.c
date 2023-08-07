#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int num, guess, nguesse = 1;
    srand(time(0));        //time library used(<time.h>). every time when u will run it gives u a new random no.
    num = rand() % 10 + 1; //uses(<stdlib.h>) generate a random number between 1 to 100
    // printf("%d", num);
    do
    {
        printf("Guess the number between 1 to 10\n");
        scanf("%d", &guess);
        if (guess < num)
        {
            printf("greater no. please\n");
        }
        else if (guess > num)
        {
            printf("lower no.please\n");
        }
        else if (guess = num)
        {
            printf("woohoo you have guesed the correct no in %d times", nguesse);
        }

        nguesse++;

    } while (guess != num);

    return 0;
}