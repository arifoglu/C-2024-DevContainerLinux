#include <stdio.h>

int main () {
    // after ++
    int people = 100;
    int result = people++;
    printf("%i\n",result); // 100

    // before ++
    int humans = 100;
    int result2 = ++humans;
    printf("%i\n",result2); // 101

    //
    int gens = 10;
    gens += 5;
    printf("%i\n",gens);
    
    return 0;
}