#include <stdio.h>

int subtraction(int x,int y){
    return x - y;
}
int addition(int x,int y){
    return x + y;
}
int multiplication(int x,int y){
    return x * y;
}
int main(){
    int x,y;
    printf("Enter two number with a gap :");
    scanf("%d%d",&x,&y);
    printf("these numbers are %d and %d:\n",x,y);

    printf("which calculation do you want ? \n 1 : subtraction \n 2 : additon  \n 3 : multiplication \n type in : ");
    
    int choise;
    scanf("%d",&choise);

    switch(choise)
    {
        case 1 :
            printf("%d\n",subtraction(x,y));
           break;
        case 2 : 
            printf("%d\n",addition(x,y));
           break;  
        case 3 :
            printf("%d\n",multiplication(x,y));   
           break; 
        default:
              printf("next time you can try!!!");    
    }


    return 0;
}