#include <stdio.h>

int main () {

    printf("Welcome to SamuOpsify \n");
    printf("********************* \n");


    float radius, hight, vol;
  
    printf("Radius number : ");
    scanf("%f", &radius );
    printf("Hight number : ");
    scanf("%f", &hight );

    vol = 3.1416*radius*radius*hight;

    printf("vol is : %.2f",vol);
    return 0;
}
