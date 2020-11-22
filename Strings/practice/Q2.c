#include <stdio.h>
#include <string.h>

int main()
{
    // char *st = "Tejas ";
    char st[20];
    char st2[20];
    printf("Enter the value of first string: ");
    scanf("%s", &st);
    printf("Enter the value of second string: ");
    scanf("%s", &st2);
    int val = strcmp(st, st2);
    if (val == 0)
    {
        printf("Both strings are equal");
    }
    else
    {
        printf("Both strings are not equal");
    }

    return 0;
}