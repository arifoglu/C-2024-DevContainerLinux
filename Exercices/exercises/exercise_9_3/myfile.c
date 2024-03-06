#include <stdio.h>

int main(){
    FILE *file = fopen("/workspaces/C-2024-DevContainerLinux/Exercices/exercises/exercise_9_3/mata.txt", "w");

    if(file != NULL){
        for(int i = 1 ; i <= 100;i++){
             fprintf(file, "%d ",i);
           (i%10 == 0) ? fprintf(file,"\n") : 0;
        };
    }
    
    FILE *file2 = fopen("/workspaces/C-2024-DevContainerLinux/Exercices/exercises/exercise_9_3/matb.txt", "w");

    if(file != NULL){
        for(int k = 1 ; k <= 100;k++){
             fprintf(file, "%d ",k);
           (k%10 == 0) ? fprintf(file,"\n") : 0;
        };
    }

    return 0;
}
