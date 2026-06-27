#include<stdio.h>
int main()
{
    int marks1,marks2,marks3;
    printf("Enter the marks 1\n ");
    scanf("%d", &marks1);
    printf("Enter the marks 2\n ");
    scanf("%d", &marks2);
    printf("Enter the marks 3\n ");
    scanf("%d", &marks3);
    printf("the marks are %d,%d,%d \n",marks1,marks2,marks3);

    if(marks1<33 || marks2<33 || marks3<33){
        printf("You are fail \n");
    }
    else if ((marks1 + marks2 + marks3)/3 < 40){
        printf("You are fail due less percentage \n");
    }
    else{
        printf("Congratulations! You are pass \n");
    }
    return 0;   
}