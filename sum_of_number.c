//write a code to calculate the sum of the numbers occuring in the multiplication table of 8 (consider 8x1 to 8x10)

#include<stdio.h>
int main()
{
    int sum=0;
    for(int i=1; i<=10; i++)
    {
        sum+= (8*i);
    }
    printf("Sum of numbers in the multiplication table of 8 is: %d\n", sum);
    return 0;
}