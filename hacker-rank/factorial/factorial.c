#include <stdio.h>

int main(){
    int number;
    int fact = 1;
    printf("type a number to calculate factorial ! : ");
    scanf("%d",&number);
    
    for(int i = number ; i > 0 ;i--){
        (i<number && i > 0) ? printf("*") : 0 ;
        printf("%d",i) ;
    }

    for(int i = number ; i > 1 ; i--){
        fact *= i ;
    }
    printf("\n");
    printf("%d ! = %d",number,fact);

    return 0 ;
}