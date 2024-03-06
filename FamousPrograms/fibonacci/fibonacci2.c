#include <stdio.h>

void fibonacci(int n){
    static n1 = 0;
    static n2 = 1;
    static n3;
    if(n>0){
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        printf("%d",n3);
        fibonacci(n-1);
    }
}

int main(){
    int n,
    printf("Enter the number of elements:");
    scanf("%d",n);
    printf("fibonacci series : ");
    printf("%d%d",0,1);
    fibonacci(n-2);
    return 0;
}