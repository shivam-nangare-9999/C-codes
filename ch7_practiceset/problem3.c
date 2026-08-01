#include<stdio.h>

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];

    for(int i=0; i<n; i++)
{
    arr[i] = n*(i+1);
}
    for(int i=0; i<10; i++)
{
    printf("The value of %d X %n =%d\n",i+1,arr[i]);
}
return 0;
}      