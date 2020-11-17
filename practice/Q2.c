//calculate the area of circle

#include <stdio.h>

int main()
{
    float radius;
    float pi = 3.14;
    printf("enter the radius of circle: ");
    scanf("%f", &radius);
    float area = pi * radius * radius;
    printf("Thw area of circle is : %f", area);
    return 0;
}