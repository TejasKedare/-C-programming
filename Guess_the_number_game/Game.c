#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number, guess, ngueess = 1;
    srand(time(0));
    number = rand() % 100 + 1; //Generate random number between  1 - 100
    //printf("The number is %d \n\n", number);
    //Keep running the loop until the number is guessed;
    do
    {
        printf("Guess the number between 1 and 100: ");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Lower number please\n");
        }
        else if (guess < number)
        {
            printf("Higher number please\n");
        }
        else
        {
            printf("You guessed in %d attempts\n", ngueess);
        }

        ngueess++;
    } while (guess != number);

    return 0;
}