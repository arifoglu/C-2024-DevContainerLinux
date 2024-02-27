#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    printf("type a five digit integer : \n");

    int n ;
    scanf("%d", &n);

    int firstDigit = n % 10;    

    int secondDigit = n % 100;  
    float secondDigitE = secondDigit / 10 ; 
 
    int thirdDigit = n % 1000;   
    float thirdDigitE = thirdDigit / 100 ; 

    int fourthDigit = n % 10000; 
    float fourthDigitE = fourthDigit / 1000 ;

    int fifthDigit = n % 100000; 
    float fifthDigitE = fifthDigit / 10000 ;
 
    int sum = firstDigit + secondDigitE + thirdDigitE + fourthDigitE + fifthDigitE;
    printf("%d",sum);
    

    return 0;
}
 