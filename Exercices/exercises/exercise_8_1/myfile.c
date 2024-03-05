#include <stdio.h>

int main(){
    int days_number ;
    float hours = 0;
    float total_hours = 0;
    float average_hours = 0;
    printf("How many days do you work ? : ");
    scanf("%d",&days_number);

    if(days_number > 30) return 0;

    printf("How many hours did you work at these days ?\n");
    for(int i = 1; i <= days_number ;i++){
        printf("day %d : ", i);
        scanf("%f",&hours);
        total_hours += hours;
        average_hours = total_hours / days_number;
    }
    printf("You worked %.1f hours at this period\n",total_hours);
    printf("For %d days the average %.1f hours \n",days_number,average_hours);


    return 0;
}