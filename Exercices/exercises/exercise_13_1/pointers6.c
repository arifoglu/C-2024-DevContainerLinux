#include <stdio.h>

int main(){
    int v[3] = {10,20,30};
    int *ptr ;
    ptr = v ;

    for(int i = 0 ; i < 3;i++){
        printf("%d \n",*(ptr+i));
        printf("%p \n",(ptr+i));
    }





    return 0;
}