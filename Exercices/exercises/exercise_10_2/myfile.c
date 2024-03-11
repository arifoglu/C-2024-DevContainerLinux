#include <stdio.h>

int main(){
    char word[16];
    int totala = 0;
    int totale = 0;
    int totali = 0;
    int totalo = 0;
    int totalu = 0;
    int totaly = 0;

    printf("the program calculates the number of vowels \n");
    printf("Enter a word : ");
    scanf("%s",word);
    printf("%s\n",word);

    // alisana
    for(int i = 0 ; i < 16 ; i++){
         (word[i] == 'a') ? totala += 1 : 0 ;
    };
    for(int i = 0 ; i < 16 ; i++){
         (word[i] == 'e') ? totale += 1 : 0 ;
    };
    for(int k = 0 ; k < 16 ; k++){
         (word[k] == 'i') ? totali += 1 : 0 ;
    };
    for(int k = 0 ; k < 16 ; k++){
         (word[k] == 'o') ? totalo += 1 : 0 ;
    };
    for(int k = 0 ; k < 16 ; k++){
         (word[k] == 'u') ? totalu += 1 : 0 ;
    };
    for(int k = 0 ; k < 16 ; k++){
         (word[k] == 'y') ? totaly += 1 : 0 ;
    };

    printf("this word is contains %d vowels \n ",totala + totali + totalo + totalu + totaly);




    return 0;
}