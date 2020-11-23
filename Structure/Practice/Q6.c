#include <stdio.h>

typedef struct complex
{
    int real;
    int complex;
} cmp;

void display(cmp c)
{

    printf("Value of real part is : %d\n", c.real);
    printf("Value of imaginary part is : %d\n", c.complex);
}

int main()
{
    cmp cnum[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the real value for %d num  ", i + 1);
        scanf("%d", &cnum[i].real);

        printf("Enter the complex value for %d num  ", i + 1);
        scanf("%d", &cnum[i].complex);
    }

    for (int i = 0; i < 5; i++)
    {
        display(cnum[i]);
    }

    return 0;
}