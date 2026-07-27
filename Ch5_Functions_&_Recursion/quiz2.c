#include<stdio.h>
float c2f(float);
float c2f(float c){
    return ((9*c)/5)+32;
}
int main(){
    float c = 25.0;
    printf("The temprature in farenheit for %f degree celsius is %f\n", c, c2f(c));
    return 0;
}