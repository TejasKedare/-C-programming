#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    while (a < 10)
    // while (a > 10) // this will lead to an infinite loop
    {
        printf("%d\n", a);
        a++;
    }

    return 0;
}