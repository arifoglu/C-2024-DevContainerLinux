#include <stdio.h>

int main(void) {

   FILE *file = fopen("/workspaces/C-2024-DevContainerLinux/Exercices/exercises/exercise_9_1/hello.usr", "w");

   fprintf(file, "Hello world!\n");

   fclose(file);

   return 0;

}