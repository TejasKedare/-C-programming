#include <stdio.h>

int main()
{
    int age;
    int vipPass = 0;
    // vipPass = 1;
    printf("Enter your age: ");
    scanf("%d", &age);
    // if (age <= 70 && age >= 18)
    if ((age <= 70 && age >= 18) || (vipPass == 1))
    {
        printf("Your age is above 18 and below 70 so you cannot drive");
    }
    else
    {
        printf("You cant drive");
    }

    return 0;
}