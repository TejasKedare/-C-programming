#include <stdio.h>
float force(float mass);
int main()
{
    float a;
    printf("Enter the value of mass in kg  ");
    scanf("%f", &a);
    printf("The value of force in Newton is : %.2f \n", force(a));

    return 0;
}

float force(float mass)
{
    float result = mass * 9.8;
    return result;
}