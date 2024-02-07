#include <stdio.h>

int main() {
    //  implicit type
    int slices = 17;
    int people = 2;
    double halfThePizza = slices / 2 ;
    double halfThePizza2 = slices / (double) people ;
    double halfThePizza3 = (double) (slices / people) ;
    printf("%f\n",halfThePizza);    // 8.000000
    printf("%f\n",halfThePizza2);   // 8.500000
    printf("%.1f\n",halfThePizza2); // 8.5
    printf("%f\n",halfThePizza3);   // 8.000000


    
    return 0;
}