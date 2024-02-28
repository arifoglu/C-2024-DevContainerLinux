#include <stdio.h>

int main(){
    int x,y;
    printf("Enter two integer(with a gap) :");
    scanf("%d%d",&x,&y);
    int sum = x + y;
    int dif = x - y;
    int multiply = x * y ;
    printf("%d+%d = %d \n",x,y,sum);
    printf("%d-%d = %d \n",x,y,dif);
    printf("%d*%d = %d \n",x,y,multiply);

    return 0;
}