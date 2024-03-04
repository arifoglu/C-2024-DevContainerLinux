#include <stdio.h>

int main (){
    int a ,b,c;
    printf("Enter first number :");
    scanf("%d",&a);
    
    printf("Enter second number :");
    scanf("%d",&b);
    
    printf("Enter third number :");
    scanf("%d",&c);

    if(a > b && a > c && b > c){
        printf("largest is %d smallest is %d",a,c);
    }else if (a > b && a > c && b < c){
        printf("largest is %d smallest is %d",a,b);
    }else if(a < b && b > c && a > c){
        printf("largest is %d smallest is %d",b,c);
    }else if(a < b && b > c && a < c){
        printf("largest is %d smallest is %d",b,a);
    }else if(a < b && b < c && a < c){
        printf("largest is %d smallest is %d",c,a);
    }else if(a > b && b < c && a < c){
        printf("largest is %d smallest is %d",c,b);
    }else{};


    return 0;
}