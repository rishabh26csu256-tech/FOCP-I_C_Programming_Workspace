#include<stdio.h>

int main(){
    int a;         //product Id
    float b;       //product price
    int c;         //quantity
    float d;       //discount percentage
    
    printf("Enter Product Id:");
    scanf("%d",&a);

    printf("Enter Product price:");
    scanf("%f",&b);

    printf("Enter Quantity:");
    scanf("%d",&c);

    printf("Enter Discount percentage:");
    scanf("%f",&d);

    printf("Product ID:%d\n",a);
    printf("Subtotal:%f\n",b*c);
    printf("Discount Amount:%f\n",(b*c*d)/100.0);
    printf("Final Amount:%f",(b*c)-((b*c*d)/100.0));


    return 0;
}