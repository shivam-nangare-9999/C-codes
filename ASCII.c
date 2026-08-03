#include<stdio.h>
int main()

{
    char ch= 'a';
    printf("Enter a character: ");
    scanf(" %c", &ch);
    printf("The ASCII value of %c is %d \n", ch, ch);

    if(ch >=97 && ch<=122){
        printf("The Character is lower case \n");
    }

    else{
        printf("The Character is upper case \n");
    }
    return 0;

}