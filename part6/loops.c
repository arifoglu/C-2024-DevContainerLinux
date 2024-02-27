#include <stdio.h>

int main(){
    //initialization// comprarison // update
    printf("type a limit for loop: \n");
    int max;
    scanf("%d",&max);
    for(int i = 0; i < max ;i++)
    {
        printf("%d",i);
    }
    
    return 0;
}