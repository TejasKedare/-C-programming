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
    struct employee Tejas = {100, "Tejas", 657484.684};
    printf("code is: %d \n", Tejas.code);
    printf("Name is: %s \n", Tejas.name);
    printf("Salary is: %f \n", Tejas.salary);

    return 0;
}
