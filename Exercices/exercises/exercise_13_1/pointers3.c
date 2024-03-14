#include <stdio.h>

int main(){
    int nums[4] ={25,50,75,100};
    printf("%p\n",nums);        // =>   0x7ffec579adf0
    //printf("%p\n",&nums[0]);  // =>   0x7ffe71d2df70
    //printf("%p\n",&nums[1]);  // =>   0x7ffe71d2df70
    //printf("%p\n",&nums[2]);  // =>   0x7ffe71d2df70
    //printf("%p\n",&nums[3]);  // =>   0x7ffe71d2df70


    return 0;
}