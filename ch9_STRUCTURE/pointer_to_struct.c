#include<stdio.h>


struct employee
{
    int id;
    char name[10];
    float salary;
};

int main()
{
 struct employee e1;
 e1.id = 100;

 struct employee *ptr;
 ptr = &e1;

 //printf("%d", (*ptr).id);
 printf("%d", ptr->id);  //this is also correct way to access the member of structure using pointer
    return 0;
}