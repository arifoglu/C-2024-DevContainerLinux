#include <stdio.h>

int main(){

	int radius; // the distance from outside to center of circle
    
	printf("please enter a radius:"); 
	scanf("%i", &radius );
	
	printf("the give radius is : %i\n" ,radius); 
         
	double area = 3.14 * (radius * radius);
	printf("the area of a circle with radius(5) is %f\n",area);	

	return 0;

}	
