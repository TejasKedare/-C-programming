// Find the greatest of four number

#include <stdio.h>

int main()
{
    int num1, num2, num3, num4;
    printf("Enter NO 1: ");
    scanf("%d", &num1);
    printf("Enter NO 2: ");
    scanf("%d", &num2);
    printf("Enter NO 3: ");
    scanf("%d", &num3);
    printf("Enter NO 4: ");
    scanf("%d", &num4);

    if (num1 > num2)
    {
        printf("%d is greater ", num1);
    }
    else if (num2 > num3)
    {
        printf("%d is greater ", num3);
    }
    else if (num3 > num3)
    {
        printf("%d is greater ", num1);
    }
    else
    {
        printf("%d is greater ", num4);
    }

    return 0;
}