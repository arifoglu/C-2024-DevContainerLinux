#include <stdio.h>

int main(){
    int rows;
    int columns;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    printf("This array size will be %d x %d\n", rows, columns); 

    int grades[rows][columns];
     
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
