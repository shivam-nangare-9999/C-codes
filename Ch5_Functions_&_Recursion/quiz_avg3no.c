#include<stdio.h>

float average(int a, int b, int c);

float average(int a, int b, int c){
    return a+b+c/3.0;
}
 int main(){
    printf("The average of 3, 4, and 5 is %.2f\n", average(3,4,5));
return 0;
}