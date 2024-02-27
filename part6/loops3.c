/*
0
1 0
2 1 0
3 2 1 0
4 3 2 1 0
*/
#include <stdio.h>

int main (){
    for(int i = 0 ; i < 11 ; i++){
        for(int k = i ; k >= 0 ; k-- ){
            printf("%d",k);
        }
    printf("\n");
    }
    return 0;
}