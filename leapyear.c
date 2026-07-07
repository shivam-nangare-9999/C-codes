#include <stdio.h>
int main() 
{
    int year;
    printf("Enter Year: \n");
    scanf("%d", &year);

    if((year %4 ==00 && year %100!=0) || year %400==0){
        printf("this is leap year");
    }

    else {
        printf("This is not leap year");    
    }
}
