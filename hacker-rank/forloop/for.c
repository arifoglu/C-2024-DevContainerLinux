// For each integer  in the interval  (given as input) :
// 
// If , then print the English representation of it in lowercase. 
/// That is "one" for , "two" for , and so on.
// Else if  and it is an even number, then print "even".
// Else if  and it is an odd number, then print "odd".

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

char num[10][10] = {"one","two","three","four","five","six","seven","eight","nine"};

int main(){
    int a ,b;
    scanf("%d\n%d", &a, &b);              
    for(int i = a ; i <=b ;i++){
        if(i>=1 && i <= 9)
        {
            printf("%d %s %s \n",i ,num[i-1],(i % 2 == 0) ? "even" : "odd");
        }
        else
        {
            printf("%d %s\n",i ,(i % 2 == 0) ? "even" : "odd");
        }
    }
    return 0;
}





