#include <stdio.h>
#include <stdbool.h>

int main() {

   bool pizzaIsHealthy ;
   int temp;
   printf("do you want to piza?");
   scanf("%d",&temp);
   pizzaIsHealthy = temp;

   if(pizzaIsHealthy)
   {
    printf("Welcome to pizzaAPP\n");
   }

    return 0;
}