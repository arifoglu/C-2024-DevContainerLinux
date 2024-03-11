#include <stdio.h>

int main(){
    char word[16];
    int total = 0;

    printf("the program calculates the number of vowels \n");
    printf("Enter a word : ");
    scanf("%s",word);
    printf("%s\n",word);

    // alisana
    for(int i = 0 ; i < 16 ; i++){
         (word[i] == 'a' | word[i] == 'e' | word[i] == 'i' | word[i] == 'o' | word[i] == 'u' | word[i] == 'y') ? total++ : 0 ;
    };


    printf("this word is contains %d vowels \n ",total);




    return 0;
}