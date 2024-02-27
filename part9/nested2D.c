#include <stdio.h>

int main(){
    const int columns = 3;
    const int rows = 2;

    int grades[rows][columns] ;

    for(int i = 0 ; i < rows ; i++)
    {
        for(int k = 0 ; k < columns ;k++)
        {
            printf("%d ",grades[i][k]);    
        }
        printf("\n");     
    }

    return 0;
}
