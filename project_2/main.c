#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(0));
    int player,computer = rand()%3;
    

   /* 0 --> Snake
    1 --> Water
    2 --> Gun*/

    printf("Enter 0 for Snake, 1 for Water and 2 for Gun: \n");
    scanf("%d",&player);
    printf("You chose %d\n",player);

    if(player == computer){
        printf("Game Draw\n");
    }
    else if(player == 0 && computer == 1){
        printf("You Win\n");
    }
    else if(player == 1 && computer == 2){
        printf("You Win\n");
    }
    else if(player == 2 && computer == 0){
        printf("You Win\n");
    }
    else{
        printf("You Lose\n");
    }
    return 0; 
}