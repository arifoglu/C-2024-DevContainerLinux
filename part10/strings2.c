#include <stdio.h>
#include <string.h>

int main(){
    printf("what is your favorite food ? :");
    char favFood[50] ;
    scanf("%49s",favFood);
    printf("%s\n",favFood);

    int charCount = 0;
    while(favFood[charCount] != '\0')
    {
        charCount++;
    }
    printf("The character count is %d\n",charCount);

    // strlen
    char favDrink[10];
    printf("type in a fav drink : ");
    scanf("%s",favDrink);
    int lengthDrink = strlen(favDrink);
    printf("fav drink length is : %d",lengthDrink);

    return 0;
}