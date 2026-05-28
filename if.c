#include<stdio.h>
int main()
{
    int age;
    printf("Enter Your Age: ");
    scanf("%d", &age);
    printf("You Have Entered %d\n",age);
    if(age>=18){
        printf("You Can Vote\n");
    }
    else{
        printf("You Cannot Vote\n");
    }


    return 0;
}
