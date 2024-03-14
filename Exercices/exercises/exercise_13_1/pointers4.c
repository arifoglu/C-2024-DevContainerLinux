#include <stdio.h>

int main(){
    int nums[4] = {25,50,75,100};
    printf("%d\n",*nums);
    printf("%d\n",*(nums + 1));
    printf("%d\n",*(nums + 2));
    printf("%d\n",*(nums + 3));
    
    int nums2[5] = {2,4,6,8,10};
    int *pointer_nums2 = nums2;
    for(int i = 0; i < 5 ; i++){
       printf("%d ",*(pointer_nums2 + i));
    }

    return 0;
}