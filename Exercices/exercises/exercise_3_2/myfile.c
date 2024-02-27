#include <stdio.h>

int main(){
    float FIM;
    printf("Enter your amount : ");
    scanf("%f",&FIM);
    float euro = (FIM / 5.94573);

    printf("%.f markka is converted to  %.2f euro .\n",FIM,euro);
    return 0;
}