#include <stdio.h>
#include <stdlib.h>

void update(int *a ,int *b){
    int plus = *a;
    *a = *a + *b;
    *b = abs(plus- *b);
}

int main(){
    int a,b;
    int* pa = &a;
    int* pb = &b;
    scanf("%d %d",&a ,&b);
    update(pa,pb);
    printf("%d\n%d",a,b);
    return 0;
}