#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main() {

    // generate a number
    //psuedo number
    int maxValue = 20;
    srand(time(NULL));
    int randomNumber = rand() % (maxValue + 1) ;
    printf("%d\n",randomNumber);

    // modulus operator
    printf("guess a number 0 - %d :",maxValue);
    int input;
    scanf("%d",&input);

    if(input == randomNumber)
    {
        printf("you win\n");
    }
    else
    {
        printf("you loosed\n");
    }
   


    return 0;
}