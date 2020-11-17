// convert celsius to fahrenheit
#include <stdio.h>

int main()
{
    float celsius;
    printf("Enter temperature in celsius : ");
    scanf("%f", &celsius);
    float fahrenheit = (celsius * 9 / 5) + 32;
    printf("Temperature in float is: %f ", fahrenheit);
    return 0;
}