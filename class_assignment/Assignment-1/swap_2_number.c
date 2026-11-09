#include<stdio.h>

int main(){
int a, b, c;

printf("Enter First number:");
scanf("%d",&a);

printf("Enter Second number:");
scanf("%d",&b);

printf("\nBefore swapping:%d %d\n",a,b);

c = a;
a = b;
b = c;

printf("\nAfter swapping:%d %d",a,b);

    return 0;
}