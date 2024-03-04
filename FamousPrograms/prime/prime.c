#include<stdio.h> 

int main(){   

int num;
int m = 0;
int flag=0;   

printf("Enter the number to check prime:");    
scanf("%d",&num);  

m = num / 2;

for(int i = 2 ; i <= m ; i++){    
    if(num%i==0){    
        printf("Number is not prime\n");    
        flag=1;    
        break;    
    }    
}    
    if(flag==0)    
    printf("Number is prime\n");     
    
    return 0;  
 } 