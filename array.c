#include<stdio.h>

int main()
{
   int marks[4];

   for(int i=0; i<4; i++)
   {
    printf("Enter the valude of %d element of array \n ", i);
    scanf("%d", &marks[i]);
   }



  //marks[0] = 90;
  // marks[1] = 80;
  // printf("the student 1 marks is %d\n", marks[0]);
  // printf("the student 2 marks is %d\n", marks[1]);
    return 0;
}
