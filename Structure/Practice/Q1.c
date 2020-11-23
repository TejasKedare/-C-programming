// two dimensional vector using c
#include <stdio.h>

struct vector
{
    int x;
    int y;
};

int main()
{
    struct vector v1, v2;
    v1.x = 34;
    v1.y = 54;

    printf("X dim is %d and Y dim is %d \n", v1.x, v1.y);

    v2.x = 44;
    v2.y = 64;

    printf("X dim is %d and Y dim is %d", v2.x, v2.y);

    return 0;
}