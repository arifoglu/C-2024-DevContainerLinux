#include <stdio.h>

int main(){
    int num = 45;
    // first acces to memory address
    printf("%p",&num);      //=>           0x7fff79fc6a24
    
    // second acces to memory address
    int *pointer_of_num = &num;
    printf("%d",*pointer_of_num); // =>           45
    return 0;
}