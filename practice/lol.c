#include<stdio.h>

int main(){
    float a,b,c;
    printf("Enter first number:");
    scanf("%f",&a);

    printf("Enter second number:");
    scanf("%f",&b);

    printf("Enter third number:");
    scanf("%f",&c);

    printf("Input:%.2f %.2f %.2f\n",a,b,c);
    printf("Total:%.2f\n",a+b+c);
    printf("Average:%.2f\n",(a+b+c)/3);

       if (((a+b+c)/3) >= 40)
        {
        printf("Pass");
        }
       else
        {
        printf("Fail");
        }

    return 0;
}