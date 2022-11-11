/*
  Author: Samayun Chowdhury
  Source: https://github.com/samayun/c-programming
  */
#include <stdio.h>
int main()
{
    int num, n;
    int i, lastDigit;
    int freq[10];
  
    printf("Enter the number: ");
    scanf("%d", &num);

    for( i=0; i<10; i++) {
       freq[i] = 0;
    }
    n = num; 

    while(n != 0)
    {
        lastDigit = n % 10;

        n /= 10;

        freq[lastDigit]++;
    }

    printf("Frequency of each digit in %d is: \n", num);
    for(i=0; i<10; i++)
    {
        printf("Frequency of %d = %d\n", i, freq[i]);
    }

    return 0;
}
