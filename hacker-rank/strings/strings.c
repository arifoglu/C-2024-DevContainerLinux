#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int size ;
    printf("type an array size :");
    scanf("%d",&size);

    int arr[size] ;
    printf("Your array size is :%d\n",size);

    printf("type your array's elements : \n");
    int sum = 0;
    for(int i = 0 ; i < size; i++){
       scanf("%d",&arr[i]);
       sum += arr[i];
    }

    printf("Your Array element are : \n");
    for(int i = 0 ; i < size ; i++){
       printf("%d ",arr[i]); 
    }
    
    printf("\nthe sum of array's numbers : %d\n",sum);


    return 0;
}