#include<stdio.h>

struct vector
{
    int x;
    int y;
};

int main()
{
    struct vector v = {1,2};
    printf("The value of x is %dx\n",v.x);
    printf("The value of y is %dy\n",v.y);
    return 0;
}