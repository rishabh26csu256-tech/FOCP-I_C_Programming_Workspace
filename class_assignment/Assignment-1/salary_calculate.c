#include<stdio.h>

int main(){
    float a,b,c;
    printf("Enter Basic Salary:");
    scanf("%f",&a);

    printf("Enter Allowance:");
    scanf("%f",&b);
    
    printf("Enter Bonus:");
    scanf("%f",&c);

    printf("Final Salary=%.2f",a+b+c);

    return 0;
}