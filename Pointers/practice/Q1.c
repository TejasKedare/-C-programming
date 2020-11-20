// Print address and value
#include <stdio.h>

int main()
{
    int a = 5;
    int *ptr;
    ptr = &a;
    printf("The address of a is : %u \n", &a);
    printf("The value of a is : %d \n", *ptr);
    printf("The value of a is : %u \n", *(&a));

    return 0;
}