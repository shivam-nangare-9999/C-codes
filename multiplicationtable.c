#include<stdio.h>
int main()
{
    int i;
    int j;
    printf("Enter Table Number:");
    scanf("%d",&i);
    for(j=1;j<=10;j++){
        printf("%d x %d = %d\n",i,j,i*j);
    }
    return 0;
}