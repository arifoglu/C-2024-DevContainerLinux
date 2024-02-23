#include <stdio.h>

int main(){
    int number = 3;
    int factorial = 1;
    for(int i = number ; i > 1 ; i--){
       factorial *= i  ;
    }
    printf("%d",factorial);

    return 0 ;
}