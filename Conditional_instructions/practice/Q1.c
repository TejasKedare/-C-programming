#include <stdio.h>

int main()
{
    int a = 10;
    (a = 11) ? printf(" I am 11") : printf("I am not 11");
    return 0;
}