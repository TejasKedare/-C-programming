#include <stdio.h>
#include <string.h>

typedef struct employee
{
    int code;
    char name[10];
    float salary;
} emp;

void show(emp emp1)
{
    printf("The code of employee is: %d\n", emp1.code);
    printf("The name of employee is: %s\n", emp1.name);
    printf("The salary of employee is: %f\n", emp1.salary);
}

int main()
{
    //Declaring e1 and ptr
    emp e1;
    emp *ptr;

    // pointing ptr to e1
    ptr = &e1;

    //Set member value to e1
    // (*ptr).code = 101; // ore you can also write  ptr->code = 101;
    ptr->code = 101;
    strcpy(ptr->name, "Tejas");
    ptr->salary = 523411.86;

    show(e1);

    return 0;
}
