#include <stdio.h>

int main()
{
    int i = 5;
    printf("The value after i++ is %d\n", i++); //first print then increment
    printf("The value after ++i is %d\n", ++i); // first increments then print
    printf("The value of i is %d\n", i);

    printf("The value of  i += 10 is %d\n", i += 10); // increments value by 10
    return 0;
}