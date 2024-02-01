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

    int a = 2 ;
    int b = 3 ;
    int c = pow(2,3);
    printf("%i\n",c);
    
    return 0;
}