#include <stdio.h>

int main(){
    int num;
    printf("Type a integer : ");
    scanf("%d",&num);
    
    int square = (num * num );

    printf("%d^2 = %d",num,square);

    return 0;
}