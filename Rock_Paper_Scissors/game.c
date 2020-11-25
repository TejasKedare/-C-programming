#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rockPaperScissor(char you, char comp)
{
    // returns 1 if you win , returns -1 if you loose , returns 0 if draw
    // condition for draw
    // Case covered
    // rp
    // rs
    // rr

    if (you == comp)
    {
        return 0;
    }

    // Not draw conditions
    // Case covered
    // pp
    // ps
    // pr
    // sp
    // ss
    // sr
    if (you == 's' && comp == 'p')
    {
        return 1;
    }
    else if (you == 'p' && comp == 's')
    {
        return -1;
    }

    if (you == 's' && comp == 'r')
    {
        return -1;
    }
    else if (you == 'r' && comp == 's')
    {
        return 1;
    }

    if (you == 'p' && comp == 'r')
    {
        return 1;
    }
    else if (you == 'r' && comp == 'p')
    {
        return -1;
    }
}

int main()
{
    char you, comp;
    int number;
    srand(time(0));
    number = rand() % 100 + 1; //Generate random number between  1 - 100
    if (number < 33)
    {
        comp = 'r';
    }
    else if (number > 33 && number < 66)
    {
        comp = 'p';
    }
    else
    {
        comp = 's';
    }

    printf("Enter r for Rock, p for Paper, s for Scissors: ");
    scanf("%c", &you);
    int result = rockPaperScissor(you, comp);
    printf("You choose %c and Computer choose %c ", you, comp);
    if (result == 0)
    {
        printf("Game draw!\n");
    }
    else if (result == 1)
    {
        printf("You win!\n");
    }
    else
    {
        printf("You Lose!\n");
    }

    return 0;
}