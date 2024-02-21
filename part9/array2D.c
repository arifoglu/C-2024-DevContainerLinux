#include <stdio.h>

int main(){

    int grades[][3] = {
        {11,12,13},
        {22,23,24},
        {32,34,44},
    };
    printf("%d\n",grades[2][1]);
    
    //// example2 
    int lines[][3] = {
        {},
        {},
        {},
    };
    lines[0][0] = 11;
    lines[0][1] = 12;
    printf("%d",grades[0][2]);
    ////

    return 0;
}