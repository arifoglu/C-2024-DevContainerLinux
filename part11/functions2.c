#include <stdio.h>

int Factorial(int number){
    int factorial = 1;
    for(int i = number ; i > 1 ;i--){
        factorial *= i;
    }
    return factorial; 
}

int main(){
    int number;
    printf("type a number to calculate ! value : ");
    scanf("%d",&number);

    printf("%d! = %d",number,Factorial(number));
    return 0;
}