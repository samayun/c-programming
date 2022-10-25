 /**
  * Author: Samayun Chowdhury
  * Source Code: https://github.com/samayun/c-programming
  */
#include <stdio.h>

int main () {
    int cse, english, chemistry, physics, math;
    float total, average;
    
    printf("Welcome to SamuOpsify \n");
    printf("********************* \n\n");
    printf("Enter marks of five subjects and calculate total and average marks \n\n");

    printf("Please Enter the marks of five subjects: \n");
    scanf("%d%d%d%d%d",&cse,&english,&chemistry,&physics,&math);

    total = english + chemistry + cse + physics + math;
    average = total / 5;

    printf("Your total marks = %.2f\n", total);
    printf("You have acheived %.2f average marks\n", average);
  
    printf("\n\n********************* \n");
    printf("Thanks for exploring \n\n");
    return 0;
}
