 /**
  * Author: Samayun Chowdhury
  * Source Code: https://github.com/samayun/c-programming
  */
#include <stdio.h>

int main () {
    float celsius, fahrenheit;

    printf("Welcome to SamuOpsify \n");
    printf("********************* \n\n");
    printf("*Fahrenheit to °Celsius Converter\n\n");
 
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 5 / 9;

    printf("%.2f Fahrenheit = %.2f Celsius", fahrenheit, celsius);

    printf("\n\n********************* \n");
    printf("Thanks for exploring \n\n");

    return 0;
}
