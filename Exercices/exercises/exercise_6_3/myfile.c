#include <stdio.h>

int main(){
    int count = 0;
    int sum = 0;
    int num = 0;

    printf("The program calculates average of scores.\n");

   do{
       printf("Enter score (4-10) : ");
       scanf("%d",&num); 
       if(num >=4 && num <= 10){
           sum += num;
           count++;
       }
   }while(num >= 0);

   float average = sum / count ;

   printf("you entered vaild %d scores.\n Average score : %.1f",count,average);
    return 0;
}