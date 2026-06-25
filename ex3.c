#include<stdio.h>
int main(int argc, char const *argv[])
{
   int num;
   printf("enter the number you want to multiplication of: \n");
   scanf("%d", &num);
   

   printf("the multiplication table of %d is: \n", num);

   for (int i=1; i<=10; i++){
         printf("%d x %d =%d\n", num, i, num*i);
   }
    return 0;
   
}
