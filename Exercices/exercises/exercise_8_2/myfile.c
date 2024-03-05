#include <stdio.h>

int main(){
   int matrix[5][5] = {
       4, 6, 25, 88, 5,
       34, 5, 300, 4, 65,
       78, 43, 11, 90, 125,
       98, 585, 12, 63, 21,
       45, 35, 9, 5, 1
   };
   int total = 0;

   for(int i = 0 ; i < 5 ; i++ ){
       for(int k = 0 ; k < 5 ; k++ ){
           total  += matrix[i][k];
        }
   }
   printf("%d\n",total);


    return 0;
}