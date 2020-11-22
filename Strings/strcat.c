#include <stdio.h>
#include <string.h>

int main()
{
    // char *st = "Tejas ";
    char st[20] = "Tejas ";
    char st2[20] = "Kedare";
    strcat(st, st2);
    printf("Now the st2 is %s", st);
    return 0;
}
