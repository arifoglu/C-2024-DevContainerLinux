#include <stdio.h>

int sum(int x,int y){
    return x + y ;
}
int difference(int x,int y){
    return x -y ;
}
int multiply(int x,int y){
    return x * y ;
}

int main(void){
    int num1 ,num2 ;
    int choice = 0;


    do{
       printf("Select a program \n1: sum\n2: difference\n3: multiply \n");
       scanf("%d",&choice);

       (choice == 1 )? printf("Your choice is addition\n") : 0;
       (choice == 2 )? printf("Your choice is difference\n") : 0;
       (choice == 3 )? printf("Your choice is multiply\n") : 0;
       
       if(choice < 4 && choice >0){
          printf("Enter the first number :");
          scanf("%d",&num1);
          printf("Enter the second number :");
          scanf("%d",&num2);
       }
       
    
    
       switch(choice){
           case 1 :
              printf("the result is : %d\n\n",sum(num1,num2));
              break;
           case 2 :
               printf("the result is : %d\n\n",difference(num1,num2));
              break;
           case 3 :
               printf("the result is : %d\n\n",multiply(num1,num2));
              break;
           default :
               printf("PLEASE !!! Select a exist function \n\n ");     
       }
    }while (choice >= 0);


    return 0;
}