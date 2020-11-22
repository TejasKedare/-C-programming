#include <stdio.h>
#include <string.h>

int main()
{
    char *st = "Tejas";
    //char st[] = "Tejas";
    char st2[10];
    strcpy(st2, st);
    printf("Now the st2 is %s", st2);
    return 0;
}
