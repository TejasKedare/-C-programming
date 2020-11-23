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
    struct employee facebook[100];
    facebook[0].code = 100;
    strcpy(facebook[0].name, "Tejas");
    facebook[0].salary = 10000.45;
    printf("Done");
    return 0;
}
