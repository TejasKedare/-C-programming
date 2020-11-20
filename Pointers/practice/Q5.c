#include <stdio.h>

int main()
{
    int i = 345;
    int *ptr;
    int **ptr_ptr;

    ptr = &i;
    ptr_ptr = &ptr_ptr;

    printf(" the value of i si %d", **ptr_ptr);

    return 0;
}