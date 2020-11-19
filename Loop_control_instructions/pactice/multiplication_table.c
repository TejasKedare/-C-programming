//Multiplication table
#include <stdio.h>

int main()
{
    int a;
    printf("Enter the number : ");
    scanf("%d", &a);
    printf("*** Multiplication table of %d *** \n", a);
    for (int i = 1; i < a; i++)
    {
        printf("%d x %d = %d \n", a, i, i * a);
    }

    return 0;
}