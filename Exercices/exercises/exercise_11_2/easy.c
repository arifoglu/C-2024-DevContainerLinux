#include <stdio.h>
#include <string.h>

int main(void){
     FILE *file = fopen("/workspaces/C-2024-DevContainerLinux/Exercices/exercises/exercise_11_2/abc.txt","w");
     fprintf(file,"hello world!");
     fclose(file);

     char salutations[13] = "Hello World!";
     FILE *file2 =fopen("/workspaces/C-2024-DevContainerLinux/Exercices/exercises/exercise_11_2/def.txt","w");
     fprintf(file2,"%s",salutations);
     fclose(file2);

     char greetings[13];
     FILE *file3 = fopen("/workspaces/C-2024-DevContainerLinux/Exercices/exercises/exercise_11_2/ghi.txt","w");
     printf("enter your greetings : ");
     scanf("%s",greetings);
     fprintf(file3,"%s",greetings);
     fclose(file3);
    
     char word[14];
     FILE *file4 = fopen("/workspaces/C-2024-DevContainerLinux/Exercices/exercises/exercise_11_2/ghi.txt","r");
     fgets(word,14,file4);
     printf("<%s> comes from file ghi.txt \n",word);
     fclose(file4);

     


    return 0;
}