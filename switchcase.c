#include<stdio.h>
int main()

{
    int age;
   printf("Enter Your Age\n");
   scanf("%d", &age);

   switch (age)
   {
   case 18:
       printf("You are 18 years old.\n");
       break;
   case 19:
       printf("You are 19 years old.\n");
       break;
   default:
       printf("You are not 18 or 19 years old.\n");
       break;
   }

    return 0;
}
