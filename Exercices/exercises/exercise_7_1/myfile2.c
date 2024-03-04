#include <stdio.h>

void cat(void){
    printf("the cat says meow!!\n");
}
void dog(void){
    printf("the dog says wuff-wuff!!\n");
}
void cow(void){
    printf("the cow says mooo!!\n");
}

int main(void) {
   int choice;

   do{
      printf("1:cat \n2:dog \n3:cow \nselect an animal : ");
      scanf("%d",&choice);
      (choice>0 && choice < 4) ? printf("you selected %d \n",choice) : printf("you have to select just from this animals  (1 or 2 or 3) !!! \n");
      if(choice == 1)
      {
        cat();
      }
      else if(choice == 2)
      {
        dog();
      }
      else if(choice == 3)
      {
       cow();
      }
   }while(choice >0 && choice < 4) ;


   return 0;
}