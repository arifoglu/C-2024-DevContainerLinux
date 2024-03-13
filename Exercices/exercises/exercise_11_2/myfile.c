#include <stdio.h>


int main(void){
    FILE *file = fopen("/workspaces/C-2024-DevContainerLinux/Exercices/exercises/exercise_11_2/phonedir.txt","r");
    struct person {
        char firstname[21];
        char lastname[21];
        char telephone[11];
    } current;

    if(file != NULL){
        int entries = 0;
        fscanf(file,"%d",&entries);

        int i;
        for(i = 0 ; i < entries ; i++){
            fscanf(file,"%s%s%s",current.firstname,current.lastname,current.telephone);
            printf("%20s %20s %10s\n",current.firstname,current.lastname,current.telephone);
        }
        fclose(file);
    }

    return 0;
}

    


