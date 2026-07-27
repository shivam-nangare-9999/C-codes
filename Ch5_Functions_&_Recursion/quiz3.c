#include<stdio.h>
float force (float);

float force (float mass){
    return mass * 9.8;  
}

int main(){
    int m = 45;
    printf("The force on a mass of %d kg is %.2f N\n", m, force(m));
    return 0;
}