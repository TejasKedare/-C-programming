#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("How many intigers do you want to enter: ");
    scanf("%d", &n);
    int *ptr;
    // printf("The size of int on my pc is : %d \n", sizeof(int));
    // printf("The float of int on my pc is : %d \n", sizeof(float));
    // printf("The char of int on my pc is : %d \n", sizeof(char));
    // printf("The double of int on my pc is : %d \n", sizeof(double));

    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of %d element: ", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {

        printf("The value of %d element is : %d\n", i, ptr[i]);
    }

    return 0;
}