#include <stdio.h>

int main(){

    printf("type your slice of pizza : ");
    int slices;
    scanf("%d",&slices);
    int caloriSlices = 100;
    switch(slices)
    {
        case 1:
           printf("You did a great job :");
           break;
        case 2:
           printf("You did a good job :");
           break;   
        case 3:
           printf("You did a bad job :");
           break;   
        case 4:
           printf("You are disappointed :");
           break;   
        default:
           printf("try next time :");
    }
    printf("%d calories",caloriSlices * slices );

    return 0;
}