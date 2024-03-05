#include <stdio.h>

int main(){
    int x;
    printf("Enter a integer : ");
    scanf("%d",&x);
    (x%2 == 0)? printf("this number (%d) is even.\n",x) : printf("this number (%d) is odd.\n",x);

    return 0;
}