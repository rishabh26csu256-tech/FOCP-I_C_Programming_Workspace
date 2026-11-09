#include<stdio.h>

int main(){
    float a;
    
    printf("Enter temperature in Celsius:");
    scanf("%f",&a);

    printf("Input:%.2f\n",a);
    printf("Output:%.2f",(a*(9.0/5.0))+32.0);
    return 0;
}