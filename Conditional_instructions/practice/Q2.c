// calculate the total and give pass or fail
#include <stdio.h>

int main()
{
    int physics, chemistry, maths;
    float total;
    printf("Enter Physics marks: ");
    scanf("%d", &physics);
    printf("Enter Chemistry marks: ");
    scanf("%d", &chemistry);
    printf("Enter Maths marks: ");
    scanf("%d", &maths);
    total = (physics * maths * chemistry) / 2;
    if ((total < 40) || physics < 33 || maths < 33 || chemistry < 33)
    {
        printf("Your total percentage is %f and your are fail", total);
    }
    else
    {
        printf("Your total percentage is %f and your are pass", total);
    }

    return 0;
}