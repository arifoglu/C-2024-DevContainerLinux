#include <stdio.h>

int main(void){
    struct person{
        char firstname[20];
        char lastname[20];
        char telephone[20];
    };
    
    struct person new_person;

    printf("enter first name : ");
    scanf("%s",&new_person.firstname[0]);
    printf("last name :");
    scanf("%s",&new_person.lastname[0]);
    printf("Enter telephone number");
    scanf("%s",&new_person.telephone[0]);

    FILE *file = fopen("/workspaces/C-2024-DevContainerLinux/Exercices/exercises/exercise_11_1/phonedir.txt","a");

    if( file != NULL){
        fprintf(file,"%s %s %s\n",new_person.firstname,new_person.lastname,new_person.telephone);
        fclose(file);
        printf("Succesfully saved data");
    }


    return 0;
}