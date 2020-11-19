//Reverse Multiplication table
#include <stdio.h>

int main()
{
    int a;
    printf("Enter the number : ");
    scanf("%d", &a);
    printf("*** Reverse Multiplication table of %d *** \n", a);
    for (int i = a; i; i--)
    {
        printf("%d x %d = %d \n", a, i, i * a);
    }

    return 0;
}