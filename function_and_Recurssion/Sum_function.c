#include <stdio.h>
// sum is a function who takes a and b as ainput and returns output
int sum(int a, int b); // function prototype decleration
int main()
{
    int c = sum(3, 15); // function call
    printf("The sum is : %d\n", c);
    return 0;
}

int sum(int a, int b) // function definition;
{
    int result;
    // result = a + b;
    // printf("The sum is : %d", result);
    return a + b;
}