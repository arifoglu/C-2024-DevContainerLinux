#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main(){
    // generate a number
    int maxValue = 20;
    srand(time(NULL));
    int randomNumber = rand() % (maxValue + 1); 
    printf("%d\n",randomNumber);

    //
    printf("guess a number 0 - %d : ",maxValue); 
    int guess;
    scanf("%d",&guess);

    if(guess == randomNumber)
    {
        printf("You win\n");
    }
    else
    {
         printf("you lost!\n"); 
    }

    printf("Thanks for playing\n");
    return 0;
}