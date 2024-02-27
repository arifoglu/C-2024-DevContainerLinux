#include <stdio.h>

int main(){
    int number1;
    float number2;
    printf("Enter a integer : ");
    scanf("%d",&number1);
    printf("Enter a floating number : ");
    scanf("%f",&number2);
    
    printf("your integer is %d\n",number1);
    printf("your integer is %.2f\n",number2);


    return 0;
}