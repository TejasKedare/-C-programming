#include <stdio.h>

int main()
{
    char name[100];
    printf("Enter the string : ");
    gets(name);
    puts(name);
    printf("The string ypu printed is %s ", name);

    return 0;
}