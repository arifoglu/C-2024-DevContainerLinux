#include <stdio.h>

int main(){
    int password = 35;
    // this passwords go to memory like this   &password
    printf("%p",&password); // =>            0x7fffa5dd4494
    int *pointer_of_password = &password ;
    printf("%d",*pointer_of_password); //  => 35 ;
    return 0;
}