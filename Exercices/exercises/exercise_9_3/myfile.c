#include <stdio.h>

int main(){
    FILE *file = fopen("/workspaces/C-2024-DevContainerLinux/Exercices/exercises/exercise_9_3/mata.txt", "w");

    FILE *file2 = fopen("/workspaces/C-2024-DevContainerLinux/Exercices/exercises/exercise_9_3/matb.txt", "w");
    
    FILE *sum = fopen("/workspaces/C-2024-DevContainerLinux/Exercices/exercises/exercise_9_3/sum.usr", "w");

    if(file != NULL)
    {
        for(int i = 1 ; i <= 100;i++){
             fprintf(file , "%d ",i);
           (i%10 == 0) ? fprintf(file,"\n") : 0;
        };
    }
    if(file2 != NULL)
    {
        for(int i = 1 ; i <= 100;i++){
             fprintf(file2, "%d ",i);
           (i%10 == 0) ? fprintf(file2,"\n") : 0;
        };
    }
    
    int i,j,a,b;
    if(file != NULL && file2 != NULL)
    {
        for(i = 0 ; i < 10 ; i++){
            for(j = 0 ; j < 10 ; j++){
                fscanf(file,"%d",&a);
                fscanf(file2,"%d",&b);
                (j == 9) ? fprintf(sum,"%d\n", a+b ) : fprintf(sum,"%d\t", a+b ) ; 
            }
        }

    fclose(file);
    fclose(file2);
    fclose(sum);    
    }

    
    return 0;
}
