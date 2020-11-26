#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    // printf("The size of int on my pc is : %d \n", sizeof(int));
    // printf("The float of int on my pc is : %d \n", sizeof(float));
    // printf("The char of int on my pc is : %d \n", sizeof(char));
    // printf("The double of int on my pc is : %d \n", sizeof(double));

    ptr = (int *)malloc(10 * sizeof(int));

    for (int i = 0; i < 10; i++)
    {
        ptr[i] = (i + 1) * 7;

        printf("The value of 7 x %d  is : %d\n", i + 1, ptr[i]);
    }

    // realloc ptr
    ptr = realloc(ptr, 15 * sizeof(int));
    printf("After rellocating \n");

    for (int i = 0; i < 15; i++)
    {

        ptr[i] = (i + 1) * 7;

        printf("The value of 7 x %d  is : %d\n", i + 1, ptr[i]);
    }

    return 0;
}