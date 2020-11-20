#include <stdio.h>

int sum(int a, int b);

int main()
{
    sum(3, 5);

    return 0;
}

int sum(int a, int b)
{
    int ans = a + b;

    printf(" %d + %d = %", a, b, ans);
}