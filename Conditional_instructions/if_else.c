#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age >= 70)
    {
        printf("Your age is above 90 you cannot drive");
    }
    else
    {
        printf("You can drive");
    }

    return 0;
}