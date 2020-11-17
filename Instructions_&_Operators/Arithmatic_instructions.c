#include <stdio.h>
#include <math.h>

int main()
{
    int a = 4;
    int b = 9;
    printf("The value of a + b is : %d\n", a + b);
    printf("The value of a - b is : %d\n", a - b);
    printf("The value of a * b is : %d\n", a * b);
    printf("The value of a / b is : %d\n", a / b);
    int z;
    z = b * a; // will work
    // b *a = z;  // will not work
    printf("The value of z is : %d\n", z);

    printf("5 when divided by 2 gives a remainder of %d\n", 5 % 2);
    printf("-5 when divided by 2 gives a remainder of %d\n", -5 % 2);
    printf("5 when divided by -2 gives a remainder of %d\n", 5 % -2);

    printf("Here is how to take exponential operatr ,%f\n", pow(3, 2));

    return 0;
}