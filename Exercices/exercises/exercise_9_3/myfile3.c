#include <stdio.h>

int main(){
    FILE *file = fopen("/workspaces/C-2024-DevContainerLinux/Exercices/exercises/exercise_9_3/matb.txt", "r");

    int nums[10][10];
    int sum = 0;
    
    for(int i = 0 ; i <= 10 ; i++)
    {
        for(int k = 0 ; k <= 10 ; k++)
        {
           fscanf(file,"%d",&nums[i][k]);
           sum += nums[i][k];
        }     
    }
    printf("%d",sum);



    return 0;
}