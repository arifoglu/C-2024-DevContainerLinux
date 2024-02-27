#include <stdio.h>

int main(){
    //initialization// comprarison // update
    printf("type a limit for loop: \n");
    int max;
    scanf("%d",&max);
    int i;
    for(i = 0; i < max ;i++)
    {
        printf("%d",i);
    }

    printf("\nyou printed up to the number %d \n",i-1);
    printf("you printed %d numbers \n",i);

    return 0;
}