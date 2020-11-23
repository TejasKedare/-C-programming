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
    e1.code = 100;
    //e1.name = "Tejas"; --> "Wont Work"
    strcpy(e1.name, "Tejas");
    e1.salary = 55.454;

    printf("%d\n", e1.code);
    printf("%s\n", e1.name);
    printf("%f\n", e1.salary);
    return 0;
}
