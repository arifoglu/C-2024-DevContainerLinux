#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
  int ar[n] ;

  for(int i = 0 ; i < n ; i++){
     if(i == 0)
     {
      ar[i] = a ;     
     }
     else if(i == 1)
     {
      ar[i] = b ;     
     }
     else if(i == 2)
     {
      ar[i] = c;
     }
     else
     {
      ar[i] = ar[i-1]+ar[i-2]+ar[i-3];
     }
  }
   return ar[n-1];
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}