#include<stdio.h>
int main()
{
    int a=10, b=20 , c=30, d=12;
    if(a>b && a>c && a>d){
        printf("The Largest Number is %d",a);
    }
    else if(b>a && b>c && b>d){
        printf("The Largest Number Is %d",b);
    }
     else if(c>a && c>b && c>d){
        printf("The Largest Number Is %d",c);
    }
     else if(d>a && d>b && d>c){
        printf("The Largest Number Is %d",d);
     }
     return 0;
 }