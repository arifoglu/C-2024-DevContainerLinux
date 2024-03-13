#include <stdio.h>

int main(void){
  struct person {
      char firstName[21];
      char lastName[21];
      char  telephone[11];
  };
  struct person new_person;

    FILE *phonedir = fopen("/workspaces/C-2024-DevContainerLinux/Exercices/exercises/exercise_11_2/phonedir.txt","w");
    (phonedir != NULL) ? fprintf(phonedir,"Firstname    LastName   Tel number \n ") : 0 ;
    fclose(phonedir);
    
    printf("Type your credentials please : \n\n");

for(int i = 0 ;i < 50 ;i++){
         printf("Enter first name :");
         scanf(" %s",&new_person.firstName[0]);
         
         printf("Enter last name :");
         scanf(" %s",&new_person.lastName[0]);
         
         printf("Enter tel Number : \n");
         scanf("%s",&new_person.telephone[0]);
         
         printf(" %s %s %s \n",new_person.firstName,new_person.lastName,new_person.telephone);

        FILE *phonedir_append = fopen("/workspaces/C-2024-DevContainerLinux/Exercices/exercises/exercise_11_2/phonedir.txt","a");
         if(phonedir_append != NULL) {
             fprintf(phonedir_append,"%s         %s       %s\n ",new_person.firstName,new_person.lastName,new_person.telephone);
             fclose(phonedir_append);
         }
         printf("Succesfully saved data.\n\n");
         
    }
    return 0;
}

 

