#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    char name[10];
    float salary;
};
void show(struct employee emp)
{
    printf("The code of employee is: %d\n", emp.code);
    printf("The name of employee is: %s\n", emp.name);
    printf("The salary of employee is: %f\n", emp.salary);
}
int main()
{
    struct employee e1;
    struct employee *ptr;
    ptr = &e1;
    // (*ptr).code = 101; // ore you can also write  ptr->code = 101;
    ptr->code = 101;
    strcpy(ptr->name, "Tejas");
    ptr->salary = 523411.86;
    show(e1);
    return 0;
}
