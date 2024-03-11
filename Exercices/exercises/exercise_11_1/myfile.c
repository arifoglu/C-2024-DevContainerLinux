#include <stdio.h>

int main(){
    char firstName[21];
    char lastName[21];
    int telNo;

    FILE *phonedir = fopen("/workspaces/C-2024-DevContainerLinux/Exercices/exercises/exercise_11_1/phonedir.txt","w");
    (phonedir != NULL) ? fprintf(phonedir,"Firstname    LastName   Tel number \n ") : 0 ;
    fclose(phonedir);
    
    printf("Type your credentials please : \n\n");

for(int i = 0 ;i < 50 ;i++){
         printf("Enter first name :");
         scanf(" %s",firstName);
         
         printf("Enter last name :");
         scanf(" %s",lastName);
         
         printf("Enter tel Number : \n");
         scanf("%d",&telNo);
         
         printf(" %s %s %d \n",firstName,lastName,telNo);
         printf("Succesfully saved data.\n\n");

        FILE *phonedir_append = fopen("/workspaces/C-2024-DevContainerLinux/Exercices/exercises/exercise_11_1/phonedir.txt","a");
         if(phonedir_append != NULL) {
             fprintf(phonedir_append,"%s         %s       %d\n ",firstName,lastName,telNo);
             fclose(phonedir_append);
         }
         
    }
    return 0;
}

 

