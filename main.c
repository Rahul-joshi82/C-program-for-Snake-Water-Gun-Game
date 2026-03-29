#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int player, computer = (rand() % 3) + 0;
    srand(time(0));
    /*
    0-->Snake
    1-->Water
    2-->Gun
    */
   printf("Enter 0 for Snake, 1 for Water and 2 for Gun: ");
    scanf("%d", &player);
    printf("Computer chose: %d\n", computer);
    while (player < 0 || player > 2)
    {
        printf("Invalid input. Please enter 0, 1, or 2: ");
        scanf("%d", &player);
    }
    if(player == computer){
        printf("It's a tie! Both chose the same.\n");
    } else if((player == 0 && computer == 1) || (player == 1 && computer == 2) || (player == 2 && computer == 0)){
            printf("Congratulations! You win!\n");
        } else {
            printf("Sorry, you lose. Computer wins!\n");
        }
    
    
    

    return 0;
}
