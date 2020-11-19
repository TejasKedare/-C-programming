#include <stdio.h>
#include <math.h>
void area(int side);
int main()
{
    int side;
    printf("Enter The value of side: ");
    scanf("%d", &side);
    area(side);
    return 0;
}

void area(int side)
{
    printf("The area is : %f", pow(side, 2));
}