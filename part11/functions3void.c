#include <stdio.h>

int Factorial(int number){
    int factorial = 1;
    for(int i = number ; i > 1 ;i--){
        factorial *= i;
    }
    return factorial; 
}

void outputFactorial(){
    int number;
    printf("Type a number to calculate ! value : ");
    scanf("%d",&number);

    printf("%d! = %d",number,Factorial(number));
}

int main(){
    outputFactorial();
    return 0;
}