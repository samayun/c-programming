 /**
  * Author: Samayun Chowdhury
  * Source Code: https://github.com/samayun/c-programming
  */
#include <stdio.h>

int main () {
    printf("Welcome to SamuOpsify \n");
    printf("********************* \n\n");
    printf("Calculate area of square \n\n");

    int side, area; 
    printf("Enter the Length of Side : ");
    scanf("%d", &side);
   
    area = side * side;
    printf("\nArea of Square : %d", area);

    printf("\n\n********************* \n");
    printf("Thanks for exploring \n\n");
    return 0;
}
