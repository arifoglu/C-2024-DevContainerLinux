#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int input)
{
    for (int i = input-1 ; i>1 ; i--)
    {
       if(input % i == 0)
       {
         return false;
       }
    }
    return true;
}

int main (){
  printf("type a number greater than 2 : \n");
    int input ;
    scanf("%d",&input);
  
    for (int i = input-1 ; i>1 ; i--)
    {
      bool prime = isPrime(i);
      (prime) ? printf("%d is prime \n",i) : 0 ;
    }



    return 0;
}



