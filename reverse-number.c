/*
  Author: Samayun Chowdhury
  Source: https://github.com/samayun/c-programming
  */
#include <stdio.h>
int main() {
  int number, reverse = 0, remainder;

  printf("Enter the number: ");
  scanf("%d", &number);

  while (number != 0) {
    remainder = number % 10; 
    reverse = reverse * 10 + remainder; 
    number = number / 10;
  }
  printf("Reversed number = %d", reverse);
  return 0;
}
