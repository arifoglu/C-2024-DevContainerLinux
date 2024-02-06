#include <stdio.h>
#include <math.h>

int main() {
    // + - * /
    int x = 2 + 3 * 4 / 4 - 3 ; // result is 2
    int y = 5 % 2;     // result is 1
    int z = 16 % 9 ;  // result is 7 it is remainder
    printf("%i\n",x);
    printf("%i\n",y);
    printf("%i\n\n",z);


    int p1 = 5 % 7;
    int p2 = 25 % 7;
    int p3 = 125 % 7;
    int p4 = 625 % 7;
    int p5 = 3125 % 7 ;
    int p6 = 15625 % 7 ;
    int sum =( p1 + p2 + p3 + p4 + p5 );
    printf("%i\n%i\n%i\n%i\n%i\n%i\n",p1,p2,p3,p4,p5,p6);

    // to avoid error we have to run this code => gcc -o aritmetic aritmetic.c -lm 
    int n1 = 5 ;
    int n2 = pow(n1,2); // 25
    int n3 = pow(n1,3); // 125
    printf("%i\n",n3);

    double m ;
    for (m = 0 ; m < 7 ; m++){
        printf("%.0f\n",pow(5,m));
    }

    return 0;
}