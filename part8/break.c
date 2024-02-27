#include <stdio.h>

int main(){
    
    int password = 1234;
    int i = 0;

    while(1)
    {
        printf("%d",i);
        
        if(i == password)
        {
            printf("we found it \n");
            break;
        }
        i++;
    }
    
    return 0;
}