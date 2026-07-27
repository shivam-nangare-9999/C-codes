#include<stdio.h>

int fatorial(int);


int factorial(int n){
    if (n == 1 || n == 0){
        return 1;
}
        return n * factorial(n - 1) * n;
}
int main(){
    int a=3;
    printf("THe Factorial of %d is %d\n",a,factorial(a));
    return 0;
}