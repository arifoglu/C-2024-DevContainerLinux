#include <stdio.h>

int main() {
    int number, sum = 0;

    // Input a five-digit integer
    printf("Enter a five-digit integer: ");
    scanf("%d", &number);

    // Check if the input is a five-digit integer
    if (number < 10000 || number > 99999) {
        printf("Invalid input! Please enter a five-digit integer.\n");
        return 1; // Return non-zero value to indicate error
    }

    // Calculate the sum of digits
    while (number > 0) {
        sum += number % 10; // Add the last digit to sum
        number /= 10;       // Remove the last digit
    }

    // Print the sum of digits
    printf("Sum of digits: %d\n", sum);

   // // digital root
   // int a ,b ;
   // scanf("%d%d",&a , &b);  
   // int digitalroot = sum 
   // printf("");
    return 0; // Return zero to indicate success
}
