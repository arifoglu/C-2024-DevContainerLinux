#include <stdio.h>

int main() {

    
    //int people = 2.5e4 ; // 24000 
    //printf("%i\n",people);

    printf("How many people are there : ");
    double people;

    scanf("%lf", &people);
    printf("%f\n",people); /// decimal notation
    printf("%e\n",people); /// scientific notation
    printf("%g\n",people); /// computer decides
    

    return 0;
}