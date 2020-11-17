//Which of the following is invalid in c
#include <stdio.h>

int main()
{
    int a;
    b = a; // invalid
    int v = 3 ^ 3;
    printf("%d", v); //It is bitwise or operator it will print 0 not 9
    char dt = '21 dec 2020';
    printf("%c", dt); //only one character is required
    return 0;
}