//Write a function int max_of_four(int a, int b, int c, int d) which reads four arguments and returns the greatest of them.

#include <stdio.h>


int max_of_four(int a, int b, int c, int d){
    int max = a;
    (b > max) ? (max=b) : 0 ;
    (c > max) ? (max=c) : 0 ;
    (d > max) ? (max=d) : 0 ;
    return max;
}

int main(){
    int a,b,c,d;
    printf("type in four integers respectively :\n");
    scanf("%d %d %d %d",&a, &b, &c, &d);
    int answer = max_of_four(a,b,c,d);
    printf("%d\n",answer);
    return 0;
}
