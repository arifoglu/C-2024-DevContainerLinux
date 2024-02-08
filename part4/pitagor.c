#include <stdio.h>
#include <math.h>

int main(){
    double a;
    double b;

    printf("This application will calculate the hypotenus of triangle\n");
    
    // get first value
    printf("enter first value:");
    scanf("%lf",&a);
    // get second value
    printf("enter second value:");
    scanf("%lf",&b);
    
    double c = sqrt(pow(a,2)+pow(b,2));

    printf("%.f",c);

    return 0;
}