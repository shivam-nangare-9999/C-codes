#include<stdio.h>

int addNumbers(int a, int b){
    return a+b;
}

int main()
{
    int x,y;
    printf("Enter 1st Number:\n",x);
    scanf("%d",&x);

    printf("Enter 2nd Number:\n",y);
    scanf("%d",&y);
    int result = addNumbers(x,y);

    printf("The Result Is %d",result);

    return 0;
}