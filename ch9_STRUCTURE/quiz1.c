#include<stdio.h>

struct employee
{
    int id;
    char name[20];
    float salary;
};

int main()
{
    struct employee e1;
    printf("Enter the id of employee: ");
    scanf("%d", &e1.id);
    printf("Enter the name of employee: ");
    scanf("%s", e1.name);
    printf("Enter the salary of employee: ");
    scanf("%f", &e1.salary);



    struct employee e2;
    printf("Enter the id of employee: ");
    scanf("%d", &e2.id);
    printf("Enter the name of employee: ");
    scanf("%s", e2.name);
    printf("Enter the salary of employee: ");
    scanf("%f", &e2.salary);

    struct employee e3;
    printf("Enter the id of employee: ");
    scanf("%d", &e3.id);
    printf("Enter the name of employee: ");
    scanf("%s", e3.name);
    printf("Enter the salary of employee: ");
    scanf("%f", &e3.salary);




    printf("\n");
    printf("The id of employee is %d\n", e1.id);
    printf("The name of employee is %s\n", e1.name);
    printf("The salary of employee is %.2f\n", e1.salary);

    printf("\n");
    printf("The id of employee is %d\n", e2.id);
    printf("The name of employee is %s\n", e2.name);
    printf("The salary of employee is %.2f\n", e2.salary);


    printf("\n");
    printf("The id of employee is %d\n", e3.id);
    printf("The name of employee is %s\n", e3.name);
    printf("The salary of employee is %.2f\n", e3.salary);

    return 0;
}