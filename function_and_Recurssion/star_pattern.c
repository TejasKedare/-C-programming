#include <stdio.h>
int shape(int n);
int main()
{
    int n;
    printf("Enter no of lines: ");
    scanf("%d", &n);
    shape(n);
    return 0;
}

int shape(int n)
{
    if (n == 1)
    {
        printf("*\n");
        return;
    }

    shape(n - 1);
    for (int i = 0; i < (2 * n - 1); i++)
    {
        printf("*");
    }
    printf("\n");
}