#include<stdio.h>
int main()
{
    int i;
    int skip = 5;
    for(i=1; i<=10; i++){
        printf("%d\n",i);
        if(i==skip){
            continue;
        }
    }
    return 0;
}