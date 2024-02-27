// doctors office
// 1.add a patient
// 2.view a patient
// 3.search patients
// 4.exit
#include <stdio.h>

int main()
{
    printf("Choose a menu option\n");
    printf("1.add a patient\n");
    printf("2.view a patient\n");
    printf("3.search patients\n");
    printf("4.exit\n");

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
    else if (input == 4)
    {
        printf("exiting\n");
        printf("do you want to save ? Y/N : ");
        char q ;

        getchar(); // to solve scanf input stream
        scanf("%c",&q);
          if(q == 'Y' || q == 'y')
          {
            printf("saving changes");
          }
          else if(q == 'N' || q == 'n')
          {
            printf("fine whatever\n");
          }
          else 
          {
            printf("NO!!!");
          }
    }
    else
    {
        printf("incorrect input");
    }


    return 0 ;
}