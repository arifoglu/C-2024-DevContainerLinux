#include <stdio.h>

void cat(void){
    printf("the cat says meow!!");
}
void dog(void){
    printf("the dog says wuff-wuff!!");
}
void cow(void){
    printf("the cow says mooo!!");
}

int main(void) {
   int choice;

   printf("1:cat \n2:dog \n3:cow \nselect an animal : ");
   scanf("%d",&choice);
   printf("you selected %d \n",choice);
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

   return 0;
}