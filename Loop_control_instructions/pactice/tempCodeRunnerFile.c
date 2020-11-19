//factorial
#include <stdio.h>

int main()
{
    int i = 0, n = 7, factorial;

    // printf("Enter the number : ");
    // scanf("%d", &n);
    for (i = 1; i < 7; i++)
    {
        factorial *= i;
    }
    printf("The factorial of %d is %d", n, factorial);
    return 0;
}