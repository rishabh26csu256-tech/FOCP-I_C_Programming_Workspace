#include<stdio.h>

int main(){
float price;
int quantity;

printf("Enter Price: ");
scanf("%f",&price);

printf("Enter Quantity: ");
scanf("%d",&quantity);

printf("The total bill is: %f",price * quantity);
    return 0;
}