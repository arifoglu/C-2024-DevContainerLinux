#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int a ,b;
    scanf("%d",&a);
    scanf("%d",&b);
    for(int i = a; i < b ; i++){
        (i%2==0) ? printf("%d even\n",i) : printf("%d odd\n",i);
    }
    return 0;
}