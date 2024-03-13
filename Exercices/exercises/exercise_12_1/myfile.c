#include <stdio.h>

void change_number(int x){
    printf("%d\n",x+3);
}

int main(){
   int x;
   printf("Enter the number x: ");
   scanf("%d", &x);
   printf("In the main program: x = %d\n", x);
   change_number(x);
}