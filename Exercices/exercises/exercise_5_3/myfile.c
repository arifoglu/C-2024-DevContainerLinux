#include <stdio.h>

int main(){
    int x,y;
    printf("Enter two number with a gap :");
    scanf("%d%d",&x,&y);
    printf("these numbers are %d and %d:\n",x,y);
    int subtraction = 1;
    int addition = 2;
    int multiplication = 3;

    printf("which calculation do you want ? \n 1 : subtraction \n 2 : additon  \n 3 : multiplication \n type in : ");
    
    int choise;
    scanf("%d",&choise);

    int subtract = x - y;
    int add = x + y;
    int multiply = x * y;

    switch(choise)
    {
        case 1 :
             printf("the result is : %d\n",subtract);
           break;
        case 2 : 
              printf("the result is : %d\n",add);
           break;  
        case 3 :
              printf("the result is : %d\n",multiply);
           break; 
        default:
              printf("next time you can try!!!");    
    }


    return 0;
}