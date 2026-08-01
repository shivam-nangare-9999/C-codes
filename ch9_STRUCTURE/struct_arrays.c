#include <stdio.h>

struct employee
{
    int id;
    char name[20];
    float salary;
};

int main()
{
    struct employee facebook[100];

    facebook[0].id = 100;
    facebook[1].id = 77;

    struct employee shivam = {100, "shivam", 10000.00};
    printf("The id of employee is %d\n", shivam.id);
    printf("The name of employee is %s\n", shivam.name);
    printf("The salary of employee is %.2f\n", shivam.salary);

    return 0;
}