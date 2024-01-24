#include <stdio.h>

int main(){

	printf("the number of eggs :");
    int eggs;
	scanf("%i",&eggs);

	double dozen = (double) eggs / 12;

	printf("you have %.1f dozen eggs \n",dozen);

	return 0;

}	
