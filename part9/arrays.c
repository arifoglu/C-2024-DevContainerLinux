#include <stdio.h>

int main(){
    int size;
    printf("type a size for an array :\n");
    scanf("%d",&size);
    int grades[size] ;

    printf("type elements of array respectively with a gap: \n");
    for(int i = 0 ;i < size ; i++){
        scanf("%d",&grades[i]);
    }
 
    printf("this is an array :int grades[] ={");
    for(int i = 0; i < size ; i++){
       (i > 0) ? printf(",") : 0;      
       printf("%d",grades[i]);
    };
    printf("}");

    return 0;
}
