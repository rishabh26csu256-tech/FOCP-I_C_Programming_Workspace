#include<stdio.h>

int main(){
    int a , b;
    printf("Enter first number: ");
    scanf("%d",&a);

    printf("Enter second number: ");
    scanf("%d",&b);

    printf("Input:%d %d\n",a,b);
    printf("Quotient:%d\n",a / b);
    printf("Remainder:%d",a % b);
    

    return 0;
}