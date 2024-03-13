#include <stdio.h>
#include <string.h>

int main(void){
    FILE *file_read = fopen("/workspaces/C-2024-DevContainerLinux/Exercices/exercises/exercise_11_3/phonedir.txt","r");
    if(file_read != NULL){
        struct person {
            char firstName[20];
            char lastName[20];
            char telephone[12];
        };
        struct person searched;

        printf("enter first name: ");
        scanf("%s",&searched.firstName[0]);

        
        printf("enter last name: ");
        scanf("%s",&searched.lastName[0]);

        int entries = 0;
        fscanf(file_read,"%d",&entries);

        struct person persons[entries];
        struct person current;

        int i,count = -1;
        for(int i = 0 ; i < entries ;i++){
            fscanf(file_read,"%s%s%s",&current.firstName[0],&current.lastName[0],&current.telephone[0]);
            if(strcmp(searched.firstName,current.firstName) != 0 || strcmp(searched.lastName,current.lastName) != 0 ){
                persons[++count] = current ;
            }
        }
        fclose(file_read);

        FILE *file_write = fopen("/workspaces/C-2024-DevContainerLinux/Exercices/exercises/exercise_11_3/phonedir.txt","w");

        fprintf(file_write,"%d\n",count + 1);

        for(i = 0 ; i <= count ;i++){
            fprintf(file_write,"%s %s %s\n",persons[i].firstName,persons[i].lastName,persons[i].telephone);
        }
        printf("Data removed from directory.");
        fclose(file_write);

    }




    return 0;
}