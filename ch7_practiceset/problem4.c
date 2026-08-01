#include<stdio.h>

void printArray(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d", a[i]);
    }   
        printf("\n");
}

void reverseArray(int a[], int n)
{
   /* for(int i=n-1; i>=0; i--)
    {
        printf("%d", a[i]);
    }
        printf("\n");*/

        for(int i=0; i<n/2; i++)
        {
            int temp = a[i];
            a[i] = a[n-i-1];
            a[n-i-1] = temp;
        }
}
int main()
{
    int arr[] = {1,2,3,4,5,6};
    
    printArray(arr, 6);
    reverseArray(arr, 6);
    printArray(arr, 6);
return 0;
}