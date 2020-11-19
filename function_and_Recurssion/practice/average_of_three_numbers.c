// Average of three numbers
#include <stdio.h>
int average(int num1, int num2, int num3);

int main()
{
    int num1, num2, num3;
    printf("Enter first Number:  ");
    scanf("%d", &num1);
    printf("Enter second Number:  ");
    scanf("%d", &num2);
    printf("Enter third Number:  ");
    scanf("%d", &num3);
    average(num1, num2, num3);
    return 0;
}
int average(int num1, int num2, int num3)
{
    float average = (float)(num1 + num2 + num3) / 3;
    printf("The average of %d, %d, %d  is %f", num1, num2, num3, average);
}
