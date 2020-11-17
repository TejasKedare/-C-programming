// calculate simple intrest
#include <stdio.h>

int main()
{
    int principle, rate, years;
    printf("Enter principle \n");
    scanf("%d", &principle);
    printf("Enter rate \n");
    scanf("%d", &rate);
    printf("Enter years \n");
    scanf("%d", &years);
    int simpleInterest = ((principle * rate * years) / 100);
    printf("The simple interest is: %d", simpleInterest);
    return 0;
}