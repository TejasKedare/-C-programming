#include <stdio.h>
#include <string.h>

int main()
{
    // char *st = "Tejas ";
    char st[20] = "Tejas";
    char st2[20] = "Tejas";
    int val = strcmp(st, st2);
    printf("Now the val is %d", val);
    return 0;
}
