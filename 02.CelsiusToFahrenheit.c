 /**
  * Author: Samayun Chowdhury
  * Source Code: https://github.com/samayun/c-programming
  */
#include <stdio.h>
int main () {
    float celsius, fahrenheit;
    printf("Welcome to SamuOpsify \n");
    printf("********************* \n\n");
    printf("°Celsius to *Fahrenheit Converter \n\n");
 
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    //celsius to fahrenheit conversion formula.
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("%.2f Celsius = %.2f Fahrenheit", celsius, fahrenheit);

    printf("\n\n********************* \n");
    printf("Thanks for exploring \n\n");
    return 0;
}
