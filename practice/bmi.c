#include<stdio.h>

int main(){
    float a,b;
    printf("Enter Weight:");
    scanf("%f",&a);

    printf("Enter Height:");
    scanf("%f",&b);

    printf("BMI=%.2f",a/(b*b));
    return 0;
}