#include <stdio.h>
#include <string.h>

int main(void){

    char firstName[16];
    char lastName[21];
    char fileName[9];
    char fileFormat[4];
    char filePath[100];


    printf("Please enter your informations down below :\n");

    printf("First Name : ");
    scanf("%s",firstName);

    printf("Last Name : ");
    scanf("%s",lastName);

    printf("Welcome %s %s \nCan you type a file name  and its format to save your informations  please :\n",firstName ,lastName);

    printf("File Name (max 8 character): ");
    scanf("%s",fileName);

    printf("File Format (max 3 character) : ");
    scanf("%s",fileFormat);

    printf("File name is %s.%s \n",fileName,fileFormat);
    
    // to create a file path :
    sprintf(filePath, "/workspaces/C-2024-DevContainerLinux/Exercices/exercises/exercise_9_3/%s.%s", fileName, fileFormat);

    FILE *file = fopen(filePath, "w");
    fprintf(file,"%s",filePath);

    printf("%s saved ",filePath);

    fclose(file);

    return 0;
}

