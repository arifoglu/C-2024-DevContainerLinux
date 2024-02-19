#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main (){
    int input;
    int isPrime = true;
    printf("type a number greater than 2 : \n");
    scanf("%d",&input);
    for (int i = input - 1; i>1 ; i--)
    {
       printf("%d ",i);
       if(input % i == 0)
       {
         isPrime = false;
       }
    }
    printf("\n%d%s",input, (isPrime) ? "\n is prime\n" : "\nis not prime\n" );
    return 0;
}