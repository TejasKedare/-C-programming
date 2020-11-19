// Fibonacci fib(n) = fib (n-1) + fib (n-2)
#include <stdio.h>
int fib(int n);

int main()
{
    int n;
    printf("Enter the value : ");
    scanf("%d", &n);
    printf("The Fibonacci series is : %d ", fib(n));
    return 0;
}

int fib(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}