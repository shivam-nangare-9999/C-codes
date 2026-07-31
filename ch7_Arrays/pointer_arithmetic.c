#include<stdio.h>

int main()
{
    char a = 'A';
   char *ptr = &a;
    printf("the address of a is %u\n",&a);
    printf("the address of a is %u\n",ptr);
    ptr++;
    printf("the address of a is %u\n",ptr);
return 0;
}