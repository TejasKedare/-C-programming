#include <stdio.h>
int factorial(int x);
int main()
{
    int a;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("The factorial of %d is: %d", a, factorial(a));
    return 0;
}

int factorial(int x)
{
    printf("Calling factorial %d \n", x);
    if (x == 1 || x == 0)
    {
        return 1;
    }
    else
    {
        return factorial(x - 1) * x;
    }
}