#include <stdio.h>
void Add(int a)
{
    printf("The address of variable is : %u \n", &a);
}

int main()
{
    int i = 4;
    printf("The value of i is : %d \n", i);
    Add(i);
    printf("The address of i is : %u \n", &i);
    return 0;
}