// Find wether the character used is lowercase or not
// 97 - 122 a -z ASCII values
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter the Character: ");
    scanf("%c", &ch);
    if (ch <= 122 && ch >= 97)
    {
        printf("It is a lowercase character");
    }
    else
    {
        printf("It is not a lowercase character");
    }

    return 0;
}