#include <stdio.h>

int main(){
    
    int x = 10;            // in the memory => 0x7ffe05c0bfec
    int *whereX = &x; 
    printf("%d\n",x);
    printf("%d\n",*whereX); // 10
    
    x = 11;
    printf("%d\n",x);
    printf("%d\n",*whereX); // 11

    *whereX = 12;
    printf("%d\n",x);
    printf("%d\n",*whereX); // 12

    return 0;
}