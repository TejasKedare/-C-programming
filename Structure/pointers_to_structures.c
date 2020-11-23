#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    char name[10];
    float salary;
};

int main()
{
    struct employee e1;
    struct employee *ptr;
    ptr = &e1;
    // (*ptr).code = 101; // ore you can also write  ptr->code = 101;
    ptr->code = 101;
    printf("%d", e1.code);
    return 0;
}
