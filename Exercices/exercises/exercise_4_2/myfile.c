#include <stdio.h>

int main(){
    int x;
    printf("Enter a integer : ");
    scanf("%d",&x);
    (x%2 == 0)? printf("this is even => return 0 \n") : printf("this is odd =>return 1 \n");

    return 0;
}