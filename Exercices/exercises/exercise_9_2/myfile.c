#include <stdio.h>

int main(){
    FILE *file = fopen("/workspaces/C-2024-DevContainerLinux/Exercices/exercises/exercise_9_2/numbers.s","w");
    
    fprintf(file,"93 432 65 22");

    fclose(file);
    
    return 0;
}