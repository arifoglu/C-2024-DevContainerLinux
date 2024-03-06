#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int marks_summation(int* marks, int number_of_students,char gender){

}

int main(){
    // int number_of_students;
    // char gender;
    // int sum;
// 
    // 
    // scanf("%d",&number_of_students);
    // int *marks = (int*)malloc(number_of_students * sizeof(int));
// 
    // for(int student = 0; student < number_of_students; student++){
    //     scanf("%d",(marks+student));
    // }
// 
    // scanf("%c",&gender);
    // sum = marks_summation(marks,number_of_students,gender);
    // printf("%d",sum);
// 
    // free(marks);
    
    int number_of_students;
    char gender ;

    int marks[10] = {1,3,4,5,6,7,8,12};

    for(int i = 0; i < 8 ; i++){
        if(i%2 == 0)
        {
        printf("this genders is boy : %d----%p\n",marks[i],&marks[i]);
        }
        else if(i%2 != 0)
        {
        printf("this are is girl : %d----%p\n",marks[i],&marks[i]);
        }
    }
    return 0;
}