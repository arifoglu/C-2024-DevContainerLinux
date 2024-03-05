#include <stdio.h>

int main(){
    char choise;
    int amount;
    printf("Do you drink tea or tea  (t/c)? : ");
    scanf("%c",&choise);
    printf("how many cups do you drink daily :");
    scanf("%d",&amount);

    if(choise == 't' &&  0<= amount && amount <=2 )
    {   
        printf("You don't drink a lot of tea.\n") ;
    } 
    else if (choise == 't'&& 3<=amount && amount<=20 )
    {
        printf("You drink a lot of tea!\n") ;
    }
    else if (choise == 'c' && 0<amount && amount<2 )
    {
        printf("You don't drink a lot of coffee!\n");
    }
    else if (choise == 'c' && 3<amount && amount<20 )
    {
        printf("You drink a lot of coffee!\n");
    }
    else 
    {
        printf("you did not choose tea or tea \n");
    }

    return 0;
}