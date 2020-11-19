#include <stdio.h>
void display(); // function prototype
int main()
{
    int a;
    printf("Initializing display \n");
    display(); // function call
    printf("Display function finished its work \n");
    return 0;
}

void display() // function definition;
{
    printf("This is a display\n");
}