#include <stdio.h>

int main(){
    FILE *file = fopen("/workspaces/C-2024-DevContainerLinux/Exercices/exercises/exercise_9_2/numbers.s","r");

    if(file != NULL)
    {
        int nums[4] ;
        int sum = 0;

        for(int i = 0 ; i < 4 ;i ++){
            fscanf(file,"%d",&nums[i]);
            sum += nums[i];
        }

        printf("Sum of the numbers are : %d \n",sum);
    
        fclose(file);
    }






    return 0;
}