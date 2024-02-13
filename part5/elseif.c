// doctors office
// 1.add a patient
// 2.view a patient
// 3.search patients
// 4.exit
#include <stdio.h>

int main()
{
    printf("Choose a menu option\n");
    printf(" 1.add a patient\n");
    printf(" 2.view a patient\n");
    printf(" 3.search patients\n");
    printf(" 4.exit\n");

    int input;
    scanf("%d",&input);

    if(input == 1)
    {
        printf("1.adding a patient\n");
    }
    else if(input == 2)
    {
        printf("2.viewing a patient\n");
    }
    else if (input == 3)
    {
        printf("3.searching a patient\n");
    }
    else
    {
        printf("4.exiting\n");
    }


    return 0 ;
}