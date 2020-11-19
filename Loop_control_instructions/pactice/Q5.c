#include <stdio.h>

int main()
{
    int n, sum = 0, i = 1;
    printf("Enter the number : ");
    scanf("%d", &n);
    // for (int i = 0; i <= n; i++)
    // {
    //     sum += i;
    // }
    while (i <= n)
    {
        sum += i;
        i++;
    }

    printf("The value of sum (1 to 10) is %d", sum);

    return 0;
}