#include <stdio.h>

int main(){
    int n1 = 0;
    int n2 = 1;
    int n3 ;
    int number;
    
    printf("Enter the number of elements");
    scanf("%d",&number);

    for(int i = 0; i < number ;i++){
        n3 = n1 + n2;
        printf("%d ",n3);
        n1 = n2;
        n2 = n3;
    }




    return 0;
}